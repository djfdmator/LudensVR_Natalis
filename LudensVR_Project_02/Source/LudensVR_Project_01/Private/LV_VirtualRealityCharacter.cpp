// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_VirtualRealityCharacter.h"
#include "TP_MotionController.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HeadMountedDisplayTypes.h"
#include "GameFramework/InputSettings.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "MotionControllerComponent.h"
#include "IHeadMountedDisplay.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Engine.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "OculusBoundaryComponent.h"
#include "OculusFunctionLibrary.h"

#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))

// Sets default values
ALV_VirtualRealityCharacter::ALV_VirtualRealityCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USoundCue> SC_Walking(TEXT("SoundCue'/Game/Footsteps_Ultimate/wood/Cue/footsteps_wood__x12_Cue.footsteps_wood__x12_Cue'"));

	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	CameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	VRCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VRCameraBase"));
	MovementComponent = CreateDefaultSubobject<ULV_PawnMovementComponent>(TEXT("MovementComponent"));
	BoundaryComponent = CreateDefaultSubobject<UOculusBoundaryComponent>(TEXT("OculusRiftBoundary"));

	GetCapsuleComponent()->InitCapsuleSize(25.0f, 30.0f); // �� ĸ�� ũ�� ����

	// ���� ���� �߿�
	RootScene->SetupAttachment(RootComponent);
	CameraBase->SetupAttachment(RootScene);
	VRCamera->SetupAttachment(CameraBase);
	VRCameraBase->SetupAttachment(RootScene);
	MovementComponent->UpdatedComponent = RootComponent;

	VRCameraBase->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WalkingAudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetupAttachment(VRCameraBase);

	if (SC_Walking.Succeeded())
	{
		Sound_Walking = SC_Walking.Object;
	}

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// ����Ʈ ������
	FadeOutDuration = 0.1f;
	FadeInDuration = 0.2f;
	bIsTeleporting = false;
	TeleportFadeColor = FColor::Black;
	ThumbDeadzone = 0.7f;
	bRightStickDown = false;
	bLeftStickDown = false;
	DefaultPlayerHeight = 180.0f;
	bUseControllerRollToRotate = false;

	// �÷��̾� �ӵ� ��
	playerMovementSpeed = 2.0f;

	// �Ҹ� ����
	isWalkingCount = 0;

	// �ӽ� �޽�(����)
	UStaticMeshComponent* TempMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TempMesh"));
	TempMesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_TempMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	if (SM_TempMesh.Succeeded())
	{
		TempMesh->SetStaticMesh(SM_TempMesh.Object);
	}
}

// Called when the game starts or when spawned
void ALV_VirtualRealityCharacter::BeginPlay()
{
	Super::BeginPlay();
#pragma region Device setting
	// Setup Player Height for various Platforms (PS4, Vive, Oculus)
	FName DeviceName = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();

	if (DeviceName == "SteamVR" || DeviceName == "OculusHMD")
	{
		// Windows (Oculus / Vive)
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
	}
	else
	{
		// PS4
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
		CameraBase->AddLocalOffset(FVector(0.0f, 0.0f, DefaultPlayerHeight));

		// Force Enable. PS Move lacks thumbstick input, this option lets user adjust pawn orientation during teleport using controller Roll motion.
		bUseControllerRollToRotate = true;
	}

	// Spawn and attach both motion controllers

	const FTransform SpawnTransform = FTransform(FRotator(0.0f, 0.0f, 0.0f), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f)); // = FTransform::Identity;
	FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	// "Hand" is available by checking "Expose on Spawn" in the variable on BP_MotionController.
	//  Expose on Spawn Variable parameter setup in c++ -> Use SpawnActorDeferred
	LeftController = GetWorld()->SpawnActorDeferred<ATP_MotionController>(ATP_MotionController::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (LeftController)
	{
		// ...setstuff here..then finish spawn..
		LeftController->Hand = EControllerHand::Left;
		LeftController->FinishSpawning(SpawnTransform); // UGameplayStatics::FinishSpawningActor(LeftController, SpawnTransform);
		LeftController->AttachToComponent(CameraBase, AttachRules);
	}

	RightController = GetWorld()->SpawnActorDeferred<ATP_MotionController>(ATP_MotionController::StaticClass(), SpawnTransform, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (RightController)
	{
		RightController->Hand = EControllerHand::Right;
		RightController->FinishSpawning(SpawnTransform);
		RightController->AttachToComponent(CameraBase, AttachRules);
	}
#pragma endregion

#pragma region Holder
	// Spawn Holder
	// Lantern holder(Right)
	HolderSpawn = (ALV_Holder*)GetWorld()->SpawnActor(ALV_Holder::StaticClass());
	HolderSpawn->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	HolderSpawn->SetActorRelativeLocation(FVector(-15.0f, 50.0f, -110.0f));
	HolderSpawn->SetController(RightController, LeftController);
	HolderSpawn->SetHolderTag(FName("Holder_Lantern"));

	// Diary holder(Left)
	HolderSpawn = (ALV_Holder*)GetWorld()->SpawnActor(ALV_Holder::StaticClass());
	HolderSpawn->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	HolderSpawn->SetActorRelativeLocation(FVector(-15.0f, -50.0f, -110.0f));
	HolderSpawn->SetController(RightController, LeftController);
	HolderSpawn->SetHolderTag(FName("Holder_Diary"));
#pragma endregion

	// �տ� �ִ� ����ĳ��Ʈ turn off
	RightController->TurnOffInteraction(true);

	//currentCameraPos = VRCamera->GetComponentTransform().GetLocation();
}

// Called every frame
void ALV_VirtualRealityCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rotTemp = VRCamera->GetComponentRotation();
	rotTemp.Pitch = 0.0f;
	rotTemp.Roll = 0.0f;
	VRCameraBase->SetWorldLocationAndRotation(VRCamera->GetComponentLocation(), rotTemp);

	//BoundaryComponent->IsOuterBoundaryTriggered() ? isOuter = true : isOuter = false;
}

// Called to bind functionality to input
void ALV_VirtualRealityCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind Recenter VR events
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ALV_VirtualRealityCharacter::OnResetVR);

	// Bind Grab events
	PlayerInputComponent->BindAction("GrabLeft", IE_Pressed, this, &ALV_VirtualRealityCharacter::GrabActor_Left);
	PlayerInputComponent->BindAction("GrabLeft", IE_Released, this, &ALV_VirtualRealityCharacter::ReleaseActor_Left);
	PlayerInputComponent->BindAction("GrabRight", IE_Pressed, this, &ALV_VirtualRealityCharacter::GrabActor_Right);
	PlayerInputComponent->BindAction("GrabRight", IE_Released, this, &ALV_VirtualRealityCharacter::ReleaseActor_Right);

	// Movement
	PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbLeft_Y"));
	PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbLeft_X"));
	PlayerInputComponent->BindAxis("MoveForward", this, &ALV_VirtualRealityCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALV_VirtualRealityCharacter::MoveRight);

	// Lantern event
	PlayerInputComponent->BindAction("Lantern", IE_Pressed, this, &ALV_VirtualRealityCharacter::Light_Switch);

	// Interaction
	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &ALV_VirtualRealityCharacter::WidgetPressed);
	PlayerInputComponent->BindAction("Interaction", IE_Released, this, &ALV_VirtualRealityCharacter::WidgetReleased);
}

// Widget Interaction
void ALV_VirtualRealityCharacter::WidgetPressed()
{
	RightController->Interaction_PressPointer();
}

void ALV_VirtualRealityCharacter::WidgetReleased()
{

	RightController->Interaction_ReleasedPointer();
}

// Lantern Switch
void ALV_VirtualRealityCharacter::Light_Switch()
{
	if (!RightController->nowOnInteraction)
	{
		if (RightController->grabedLantern)
		{
			RightController->grabedLantern->Light_Switch();
		}
	}
}

void ALV_VirtualRealityCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ALV_VirtualRealityCharacter::GrabActor_Left()
{
	if (!RightController->nowOnInteraction)
	{
		// ���� ��
		if (!LeftController->nowGrabDiary)
		{
			// Diary, �Ϲ� ������Ʈ pick up
			LeftController->GrabActorLeft();
			// ������ ��� �ִٸ� ���� ����
			if (RightController->nowGrabLantern)
			{
				RightController->DestroyActor();
			}
			// �����տ� �� ��� �ϱ�
			if (LeftController->nowGrabDiary)
			{
				RightController->GrabPen();
			}
		}
		// ���� ���� ��
		else if (LeftController->nowGrabDiary)
		{
			// �� ����
			if (LeftController->InHolder)
			{
				RightController->DestroyPen();
				LeftController->DestroyActor();
			}
		}
	}
}

void ALV_VirtualRealityCharacter::ReleaseActor_Left()
{
	if (!RightController->nowOnInteraction)
	{
		LeftController->ReleaseActor();
	}
}

void ALV_VirtualRealityCharacter::GrabActor_Right()
{
	if (!RightController->nowOnInteraction)
	{
		// Lantern, �Ϲ� ������Ʈ pick up
		RightController->GrabActorRight();
	}
}

void ALV_VirtualRealityCharacter::ReleaseActor_Right()
{
	if (!RightController->nowOnInteraction)
	{
		RightController->ReleaseActor();
	}
}

FRotator ALV_VirtualRealityCharacter::GetRotationFromInput(float UpAxis, float RightAxis, ATP_MotionController* MotionController)
{
	// Use PSVR method (lacking thumbstick) or the Desktop implementation with thumbstick support.
	if (bUseControllerRollToRotate)
	{
		// Get Roll difference since we initiated the teleport. (Allows Wrist to change the pawn orientation when teleporting)
		FTransform InitialControllerTransform = FTransform(MotionController->GetInitialControllerRotation(), FVector(0.0f, 0.0f, 0.0f), FVector(1.0f, 1.0f, 1.0f));
		FTransform ConvertTransformResult = UKismetMathLibrary::ConvertTransformToRelative(InitialControllerTransform, MotionController->GetMotionController()->GetComponentTransform());

		// Multiply to make 180 spins of orientation much easier.
		float ConvertTransRotationRoll = ConvertTransformResult.Rotator().Roll * 3;

		// Add current rotation to the controller adjustment
		float ActorYaw = GetActorRotation().Yaw;

		// Roll of controller gets converted to Yaw for pawn orientation.
		return FRotator(0.0f, ConvertTransRotationRoll + ActorYaw, 0.0f);
	}
	else
	{
		// Rotate input X+Y to always point forward relative to the current pawn rotation.
		FVector InputCenterNormal = UKismetMathLibrary::Normal(FVector(UpAxis, RightAxis, 0.0f));
		FVector InputNormalRotateResult = FRotator(0.0f, GetActorRotation().Yaw, 0.0f).RotateVector(InputCenterNormal);
		FRotator InputRotXResult = UKismetMathLibrary::MakeRotFromX(InputNormalRotateResult);

		// Check whether thumb is near center (to ignore rotation overrides)
		// ThumbDeadzone : Adjust this value to narrow the 'deadzone' center
		bool bCheckThumbNearCenter = (UKismetMathLibrary::Abs(UpAxis) + UKismetMathLibrary::Abs(RightAxis)) >= ThumbDeadzone;

		// Select the rotation created by thumbpad input or use current pawn rotation
		// GetActorRotation() : Use Default rotation if thumb is near center of the pad
		return UKismetMathLibrary::SelectRotator(InputRotXResult, GetActorRotation(), bCheckThumbNearCenter);
	}
}

// �� ��
void ALV_VirtualRealityCharacter::MoveForward(float value)
{
	if (rightInteraction)
	{
		FVector cameraV;
		if (value != 0.0f&&MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			// ī�޶� ForwardVector �޾ƿ���
			cameraV = VRCamera->GetForwardVector();
			cameraV.Z = 0.0f;
			// �̵�(ī�޶� ���� * ��Ʈ�ѷ� �� * �ӵ� ��)
			MovementComponent->AddInputVector(cameraV*value*playerMovementSpeed);
		}

		//�ȴ¼Ҹ� ��Ʈ��
		if (isWalkingCount < 3)
		{
			isWalkingCount++;
		}
		if (isWalkingCount == 1)
		{
			WalkingSound();
		}
		if (value == 0) 		//���߸�
		{
			isWalkingCount = 0;
		}
		else
		{
			isWalkingCount = 0;
			AudioComponent->Stop();
		}
	}
	else
	{
		isWalkingCount = 0;
	}
}

// �� ��
void ALV_VirtualRealityCharacter::MoveRight(float value)
{
	if (rightInteraction)
	{
		FVector cameraV;
		if (value != 0.0f&&MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			// ī�޶� RightVector �޾ƿ���
			cameraV = VRCamera->GetRightVector();
			cameraV.Z = 0.0f;
			MovementComponent->AddInputVector(cameraV*value*playerMovementSpeed);
		}
	}
}

void ALV_VirtualRealityCharacter::WalkingSound()
{
	AudioComponent->SetSound(Sound_Walking);
	AudioComponent->Play();
}

void ALV_VirtualRealityCharacter::MovePosition(FVector _Location, FRotator _Rotator)
{
	TeleportTo(_Location, _Rotator);

	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(1.0f, 0.0f, FadeInDuration, TeleportFadeColor, false, false);
}

void ALV_VirtualRealityCharacter::SetRightInteraction(bool _OnOff)
{
	rightInteraction = _OnOff;
}

UPawnMovementComponent* ALV_VirtualRealityCharacter::GetMovementComponent() const
{
	return MovementComponent;
}