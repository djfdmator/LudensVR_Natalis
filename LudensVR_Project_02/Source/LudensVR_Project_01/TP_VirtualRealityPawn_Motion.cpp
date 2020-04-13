//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_VirtualRealityPawn_Motion.h"
#include "TP_MotionController.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GameFramework/InputSettings.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "MotionControllerComponent.h"
#include "IHeadMountedDisplay.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Engine.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"

#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))

// Sets default values
ATP_VirtualRealityPawn_Motion::ATP_VirtualRealityPawn_Motion()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USoundCue> SC_Walking(TEXT("SoundCue'/Game/Footsteps_Ultimate/wood/Cue/footsteps_wood__x12_Cue.footsteps_wood__x12_Cue'"));

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));

	// Create Components Initialize
	RootScene = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	CameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	VRCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	VRCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("VRCameraBase"));
	MovementComponent = CreateDefaultSubobject<ULV_PawnMovementComponent>(TEXT("MovementComponent"));

	//RootComponent = RootScene;
	CameraBase->SetupAttachment(RootComponent);
	VRCamera->SetupAttachment(CameraBase);
	VRCameraBase->SetupAttachment(RootComponent);
	CapsuleComponent->AttachToComponent(VRCamera, FAttachmentTransformRules::KeepRelativeTransform);
	CapsuleComponent->BodyInstance.SetCollisionProfileName(TEXT("Pawn"));
	CapsuleComponent->SetRelativeLocation(FVector(0.0f, 0.0f, -70.0f));
	CapsuleComponent->SetRelativeScale3D(FVector(0.6f, 0.4f, 1.0f));
	MovementComponent->UpdatedComponent = RootComponent;//

	// Camera position
	VRCameraBase->SetRelativeLocation(FVector(0.0f, 0.0f, -70.0f));
	CapsuleComponent->InitCapsuleSize(50.f, 50.f);
	CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CapsuleComponent->SetGenerateOverlapEvents(true);
	CapsuleComponent->SetNotifyRigidBodyCollision(true);
	CapsuleComponent->ComponentTags.Add(FName("CapsuleComponent"));
	CapsuleComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATP_VirtualRealityPawn_Motion::CapsuleBeginOverlap);
	CapsuleComponent->OnComponentEndOverlap.AddUniqueDynamic(this, &ATP_VirtualRealityPawn_Motion::CapsuleEndOverlap);

	OutlineCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("OutlineCollider"));
	OutlineCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	OutlineCollider->SetupAttachment(RootComponent);
	OutlineCollider->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	OutlineCollider->SetRelativeLocation(FVector(0.0f, 0.0f, -70.0f));
	OutlineCollider->SetRelativeScale3D(FVector(5.0f, 5.0f, 3.0f));
	OutlineCollider->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	OutlineCollider->bApplyImpulseOnDamage = false;
	OutlineCollider->SetGenerateOverlapEvents(true);
	OutlineCollider->ComponentTags.Add(FName("OutlineCollider"));
	OutlineCollider->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATP_VirtualRealityPawn_Motion::CapsuleBeginOverlap);
	OutlineCollider->OnComponentEndOverlap.AddUniqueDynamic(this, &ATP_VirtualRealityPawn_Motion::CapsuleEndOverlap);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("WalkingAudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetupAttachment(VRCameraBase);

	if (SC_Walking.Succeeded())
	{
		Sound_Walking = SC_Walking.Object;
	}

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	FadeOutDuration = 0.1f;
	FadeInDuration = 0.2f;
	bIsTeleporting = false;
	TeleportFadeColor = FColor::Black;
	ThumbDeadzone = 0.7f;
	bRightStickDown = false;
	bLeftStickDown = false;
	DefaultPlayerHeight = 180.0f;
	bUseControllerRollToRotate = false;

	playerMovementSpeed = 2.0f;
	isPlayerMovable = true;
	
	isWalkingCount = 0;
}

// Called when the game starts or when spawned
void ATP_VirtualRealityPawn_Motion::BeginPlay()
{
	Super::BeginPlay();


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

	// Spawn Holder
	HolderSpawn = (ALV_Holder*)GetWorld()->SpawnActor(ALV_Holder::StaticClass());
	HolderSpawn->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	HolderSpawn->SetActorRelativeLocation(FVector(-15.0f, 50.0f, -110.0f));
	HolderSpawn->SetController(RightController, LeftController);
	HolderSpawn->SetHolderTag(FName("Holder_Lantern"));

	HolderSpawn = (ALV_Holder*)GetWorld()->SpawnActor(ALV_Holder::StaticClass());
	HolderSpawn->AttachToComponent(VRCameraBase, FAttachmentTransformRules::KeepRelativeTransform);
	HolderSpawn->SetActorRelativeLocation(FVector(-15.0f, -50.0f, -110.0f));
	HolderSpawn->SetController(RightController, LeftController);
	HolderSpawn->SetHolderTag(FName("Holder_Diary"));

	RightController->TurnOffInteraction(true);


	//계단
	for (TActorIterator<ALV_Stair> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		if (!ActorItr->GetName().Compare("LV_Stair_2"))
			StairTrigger = *ActorItr;
	}

	// Door
	for (TActorIterator<ALV_Door> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		if (!ActorItr->GetName().Compare("LV_Door1_2"))
			Door1_2 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door_1"))
			Door_1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door4"))
			Door4 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door5"))
			Door5 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door6"))
			Door6 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door8"))
			Door8 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door10"))
			Door10 = *ActorItr;
	}

	currentCameraPos = VRCamera->GetComponentTransform().GetLocation();
}

// Called every frame
void ATP_VirtualRealityPawn_Motion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator rotTemp = VRCamera->GetComponentRotation();
	rotTemp.Pitch = 0.0f;
	rotTemp.Roll = 0.0f;
	VRCameraBase->SetWorldLocationAndRotation(VRCamera->GetComponentLocation(), rotTemp);

#pragma region Teleportation
	//float MotionController_Left_Thumbstick_X = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_X")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Left_Thumbstick_X);
	//float MotionController_Left_Thumbstick_Y = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_Y")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Left_Thumbstick_Y);
	//float MotionController_Right_Thumbstick_X = InputComponent->GetAxisValue(TEXT("MotionControllerThumbRight_X")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Right_Thumbstick_X);
	//float MotionController_Right_Thumbstick_Y = InputComponent->GetAxisValue(TEXT("MotionControllerThumbRight_Y")); // = UGameplayStatics::GetPlayerController(GetWorld(), 0)->PlayerInput->GetKeyValue(EKeys::MotionController_Right_Thumbstick_Y);

	//																												// Left Hand Teleport Rotation
	//if (LeftController->GetIsTeleporterActive())
	//{
	//	FRotator LeftTeleportRotation = GetRotationFromInput(MotionController_Left_Thumbstick_Y, MotionController_Left_Thumbstick_X, LeftController);
	//	LeftController->SetTeleportRotation(LeftTeleportRotation);
	//}

	//// Right Hand Teleport Rotation
	//if (RightController->GetIsTeleporterActive())
	//{
	//	FRotator RightTeleportRotation = GetRotationFromInput(MotionController_Right_Thumbstick_Y, MotionController_Right_Thumbstick_X, RightController);
	//	RightController->SetTeleportRotation(RightTeleportRotation);
	//}
#pragma endregion

	//float MotionController_Left_Thumbstick_X = InputComponent->GetAxisValue(TEXT("MotionControllerThumbLeft_X"));
	//FString TheFloatStr = FString::SanitizeFloat(MotionController_Left_Thumbstick_X);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0, FColor::Red, *TheFloatStr);
}

// Called to bind functionality to input
void ATP_VirtualRealityPawn_Motion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind Recenter VR events
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::OnResetVR);

	// Bind Grab events
	PlayerInputComponent->BindAction("GrabLeft", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::GrabActor_Left);
	PlayerInputComponent->BindAction("GrabLeft", IE_Released, this, &ATP_VirtualRealityPawn_Motion::ReleaseActor_Left);
	PlayerInputComponent->BindAction("GrabRight", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::GrabActor_Right);
	PlayerInputComponent->BindAction("GrabRight", IE_Released, this, &ATP_VirtualRealityPawn_Motion::ReleaseActor_Right);

	// Bind Teleport events
	//PlayerInputComponent->BindAction("TeleportLeft", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::TeleportPressed_Left);
	//PlayerInputComponent->BindAction("TeleportLeft", IE_Released, this, &ATP_VirtualRealityPawn_Motion::TeleportReleased_Left);
	//PlayerInputComponent->BindAction("TeleportRight", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::TeleportPressed_Right);
	//PlayerInputComponent->BindAction("TeleportRight", IE_Released, this, &ATP_VirtualRealityPawn_Motion::TeleportReleased_Right);

	// Bind Input Axises
	PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbLeft_Y"));
	PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbLeft_X"));
	//PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbRight_Y"));
	//PlayerInputComponent->BindAxis(TEXT("MotionControllerThumbRight_X"));

	PlayerInputComponent->BindAxis("MoveForward", this, &ATP_VirtualRealityPawn_Motion::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_VirtualRealityPawn_Motion::MoveRight);

	//Lantern event
	PlayerInputComponent->BindAction("Lantern", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::Light_Switch);

	//Interaction
	PlayerInputComponent->BindAction("Interaction", IE_Pressed, this, &ATP_VirtualRealityPawn_Motion::WidgetPressed);
	PlayerInputComponent->BindAction("Interaction", IE_Released, this, &ATP_VirtualRealityPawn_Motion::WidgetReleased);

}

//Widget Interaction
void ATP_VirtualRealityPawn_Motion::WidgetPressed()
{
	RightController->Interaction_PressPointer();
}

void ATP_VirtualRealityPawn_Motion::WidgetReleased()
{

	RightController->Interaction_ReleasedPointer();
}

//Lantern Switch
void ATP_VirtualRealityPawn_Motion::Light_Switch()
{
	if (!RightController->nowOnInteraction)
	{
		if (RightController->grabedLantern)
		{
			RightController->grabedLantern->Light_Switch();
		}
	}
}

void ATP_VirtualRealityPawn_Motion::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATP_VirtualRealityPawn_Motion::GrabActor_Left()
{
	if (!RightController->nowOnInteraction)
	{
		if (!LeftController->nowGrabDiary)
		{
			LeftController->GrabActorLeft();
			if (LeftController->nowGrabDiary)
			{
				RightController->GrabPen();
			}
			if (RightController->nowGrabLantern && !Door1_2->isKnob && !Door_1->isKnob && !Door4->isKnob && !Door5->isKnob && !Door6->isKnob && !Door8->isKnob && !Door10->isKnob)
			{
				RightController->DestroyActor();
			}
		}
		else if (LeftController->nowGrabDiary)
		{
			if (LeftController->InHolder)
			{
				RightController->DestroyPen();
				LeftController->DestroyActor();
			}
		}
	}
}

void ATP_VirtualRealityPawn_Motion::ReleaseActor_Left()
{
	if (!RightController->nowOnInteraction)
	{
		LeftController->ReleaseActor();
	}
}

void ATP_VirtualRealityPawn_Motion::GrabActor_Right()
{
	if (!RightController->nowOnInteraction)
	{
		RightController->GrabActorRight();
	}
}

void ATP_VirtualRealityPawn_Motion::ReleaseActor_Right()
{
	if (!RightController->nowOnInteraction)
	{
		RightController->ReleaseActor();
	}
}

void ATP_VirtualRealityPawn_Motion::TeleportPressed_Left()
{
	LeftController->ActivateTeleporter();
	RightController->DisableTeleporter();
}

void ATP_VirtualRealityPawn_Motion::TeleportReleased_Left()
{
	if (LeftController->GetIsTeleporterActive())
	{
		ExecuteTeleportation(LeftController);
	}
}

void ATP_VirtualRealityPawn_Motion::TeleportPressed_Right()
{
	RightController->ActivateTeleporter();
	LeftController->DisableTeleporter();
}

void ATP_VirtualRealityPawn_Motion::TeleportReleased_Right()
{
	if (RightController->GetIsTeleporterActive())
	{
		ExecuteTeleportation(RightController);
	}
}

FRotator ATP_VirtualRealityPawn_Motion::GetRotationFromInput(float UpAxis, float RightAxis, ATP_MotionController* MotionController)
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

// Handle Teleportation
void ATP_VirtualRealityPawn_Motion::ExecuteTeleportation(ATP_MotionController* MotionController)
{
	if (!bIsTeleporting)
	{
		if (MotionController->GetIsValidTeleportDestination())
		{
			bIsTeleporting = true;
			UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(0.0f, 1.0f, FadeOutDuration, TeleportFadeColor, false, true);
			FTimerDelegate FadeDelegate;// = FTimerDelegate::CreateUObject(this, &ATP_VirtualRealityPawn_Motion::TeleportActor, MotionController);
			FadeDelegate.BindUFunction(this, FName("TeleportActor"), MotionController);
			GetWorldTimerManager().SetTimer(FadeTimerHandle, FadeDelegate, FadeOutDuration, false);
		}
		else
		{
			MotionController->DisableTeleporter();
		}
	}
}

void ATP_VirtualRealityPawn_Motion::TeleportActor(ATP_MotionController* MotionController)
{
	MotionController->DisableTeleporter();

	FVector DestLocation;
	FRotator DestRotation;
	MotionController->GetTeleportDestination(DestLocation, DestRotation);

	TeleportTo(DestLocation, DestRotation);

	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(1.0f, 0.0f, FadeInDuration, TeleportFadeColor, false, false);

	bIsTeleporting = false;
	GetWorldTimerManager().ClearTimer(FadeTimerHandle);
}

//-------------------------------------

void ATP_VirtualRealityPawn_Motion::MoveForward(float value)
{
	if (rightInteraction)
	{
		/*FVector cameraV;
		if (value != 0.0f&&MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			cameraV = VRCamera->GetForwardVector();
			cameraV.Z = 0.0f;
			MovementComponent->AddInputVector(cameraV*value*playerMovementSpeed);
		}*/
		/*if (MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			MovementComponent->AddInputVector(GetActorForwardVector()*value);
		}*/
		FVector cameraV;
		valueForward = value;
		if (isPlayerMovable) //벽 컨트롤
		{
			if (!StairTrigger->GetisStair()) // Not stair
			{
				cameraV = VRCamera->GetForwardVector();
				cameraV.Z = 0.0f;
				AddActorWorldOffset(cameraV * value * playerMovementSpeed);
			}
			else if (StairTrigger->GetisStair()) // On stair
			{
				if ((int)CapsuleComponent->GetComponentLocation().Y % 20 == 0)
				{
					cameraV = VRCamera->GetForwardVector();
					MoveStair(cameraV);
				}
				else
				{
					cameraV = VRCamera->GetForwardVector();
					cameraV.Z = 0.0f;
					AddActorWorldOffset(cameraV * value * playerMovementSpeed);
				}
			}

			//걷는소리 컨트롤
			if (isWalkingCount < 3)
			{
				isWalkingCount++;
			}
			if (isWalkingCount == 1)
			{
				WalkingSound();
			}
			if (value == 0) 		//멈추면
			{
				isWalkingCount = 0;
			}
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

void ATP_VirtualRealityPawn_Motion::MoveRight(float value)
{
	if (rightInteraction)
	{
		/*FVector cameraV;
		if (value != 0.0f&&MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			cameraV = VRCamera->GetRightVector();
			cameraV.Z = 0.0f;
			MovementComponent->AddInputVector(cameraV*value*playerMovementSpeed);
		}*/
		/*if (MovementComponent && (MovementComponent->UpdatedComponent == RootComponent))
		{
			MovementComponent->AddInputVector(GetActorRightVector()*value);
		}*/
		FVector cameraV;
		valueRight = value;
		if (isPlayerMovable)
		{
			cameraV = VRCamera->GetRightVector();
			cameraV.Z = 0.0f;
			AddActorWorldOffset(cameraV * value * playerMovementSpeed);
		}
		else
		{
			/*cameraV = VRCamera->GetRightVector();
			cameraV.Z = 0.0f;
			AddActorWorldOffset(cameraV * value * playerMovementSpeed);*/
		}
	}
}

void ATP_VirtualRealityPawn_Motion::MoveStair(FVector cameraV)
{
	FVector preCameraPos = currentCameraPos;
	currentCameraPos = VRCamera->GetComponentTransform().GetLocation();
	FVector moveZ;
	FVector triggerV = StairTrigger->GetActorForwardVector();
	float stairDot = FVector::DotProduct(currentCameraPos - preCameraPos, FVector(-triggerV.X,0.0f,0.0f));
	//printf("%f", triggerV.Y);
	if (stairDot > 0)
	{
		cameraV.Z = 0;
		//AddActorWorldOffset(cameraV * valueForward * playerMovementSpeed);
		moveZ.X = 0;
		moveZ.Y = 0;
		moveZ.Z = -10;
		AddActorWorldOffset(moveZ);
	}
	else if (stairDot < 0)
	{
		cameraV.Z = 0;
		//AddActorWorldOffset(cameraV * valueForward * playerMovementSpeed);
		moveZ.X = 0;
		moveZ.Y = 0;
		moveZ.Z = 10;
		AddActorWorldOffset(moveZ);
	}
}

void ATP_VirtualRealityPawn_Motion::CapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OverlappedComponent->ComponentTags.Contains("CapsuleComponent") && OtherComp->ComponentTags.Contains("Wall"))
	{
		isPlayerMovable = false;
	}

	if (OverlappedComponent->ComponentTags.Contains("OutlineCollider") && OtherComp->ComponentTags.Contains("IsCanGrab"))
	{
		//콜라이더 충돌 체크 테스트
		OtherComp->SetRenderCustomDepth(true);
	}

}

void ATP_VirtualRealityPawn_Motion::CapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OverlappedComponent->ComponentTags.Contains("CapsuleComponent") && OtherComp->ComponentTags.Contains("Wall"))
	{
		isPlayerMovable = true;
	}

	if (OverlappedComponent->ComponentTags.Contains("OutlineCollider") && OtherComp->ComponentTags.Contains("IsCanGrab"))
	{
		//콜라이더 충돌 체크 테스트
		OtherComp->SetRenderCustomDepth(false);
	}

}

void ATP_VirtualRealityPawn_Motion::WalkingSound()
{
	AudioComponent->SetSound(Sound_Walking);
	AudioComponent->Play();
}

void ATP_VirtualRealityPawn_Motion::MovePosition(FVector _Location, FRotator _Rotator)
{
	TeleportTo(_Location, _Rotator);

	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraFade(1.0f, 0.0f, FadeInDuration, TeleportFadeColor, false, false);
}

void ATP_VirtualRealityPawn_Motion::SetRightInteraction(bool _OnOff)
{
	rightInteraction = _OnOff;
}

UPawnMovementComponent* ATP_VirtualRealityPawn_Motion::GetMovementComponent() const
{
	return MovementComponent;
}