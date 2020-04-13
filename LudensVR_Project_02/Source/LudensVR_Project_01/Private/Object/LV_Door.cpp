// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "Object/LV_Door.h"
#include "UObject/ConstructorHelpers.h"
#include "TP_MotionController.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"


#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))
// Sets default values
ALV_Door::ALV_Door()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Tags.Add(FName("Door"));

	//������? ���׵θ�? �޽�
	DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	DoorFrameMesh->SetMobility(EComponentMobility::Movable);
	//DoorFrameMesh->SetSimulatePhysics(true);
	DoorFrameMesh->ComponentTags.Add(FName("DoorFrameMesh"));
	DoorFrameMesh->ComponentTags.Add(FName("Wall"));
	RootComponent = DoorFrameMesh;

	WallFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallFrame"));
	WallFrame->SetGenerateOverlapEvents(true);
	WallFrame->SetSimulatePhysics(false);
	WallFrame->bApplyImpulseOnDamage = false;
	WallFrame->SetCollisionProfileName(TEXT("OverlapAll"));
	WallFrame->ComponentTags.Add(FName("Wall"));
	WallFrame->SetRelativeLocation(FVector(100.0f, 10.0f, 0.0f));
	WallFrame->SetRelativeRotation(FRotator(270.0f, 0.0f, 0.0f));
	WallFrame->SetupAttachment(RootComponent);

	//�� �޽�
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetGenerateOverlapEvents(false);
	DoorMesh->SetSimulatePhysics(true);
	DoorMesh->SetRelativeLocation(FVector(59.0f, 0.0f, 2.5f));
	DoorMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	DoorMesh->SetSimulatePhysics(false);
	DoorMesh->bApplyImpulseOnDamage = false;
	DoorMesh->BodyInstance.bLockXRotation = true;
	DoorMesh->BodyInstance.bLockYRotation = true;
	DoorMesh->BodyInstance.bLockXTranslation = true;
	DoorMesh->BodyInstance.bLockYTranslation = true;
	DoorMesh->BodyInstance.bLockZTranslation = true;
	//DoorMesh->SetMobility(EComponentMobility::Static);
	DoorMesh->SetupAttachment(RootComponent);

	//������ �޽�
	KnobMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KnobMesh"));
	KnobMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	//KnobMesh->SetNotifyRigidBodyCollision(true);
	KnobMesh->ComponentTags.Add(FName("IsCanGrab"));
	KnobMesh->ComponentTags.Add(FName("KnobMesh"));
	KnobMesh->SetGenerateOverlapEvents(true);
	KnobMesh->SetRelativeLocation(FVector(-112.0f, 0.0, 110.0f));
	KnobMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	KnobMesh->bApplyImpulseOnDamage = false;
	KnobMesh->SetupAttachment(DoorMesh);
	KnobMesh->OnComponentBeginOverlap.AddDynamic(this, &ALV_Door::OnComponentBeginOverlap);
	KnobMesh->OnComponentEndOverlap.AddDynamic(this, &ALV_Door::OnOverlapEnd);

	BoxCollider_Wall = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider_Wall"));
	BoxCollider_Wall->SetupAttachment(DoorMesh);
	BoxCollider_Wall->SetRelativeLocation(FVector(-60.0f, 0.0, 110.0f));
	BoxCollider_Wall->SetRelativeScale3D(FVector(0.5f, 0.1f, 3.0f));
	//BoxCollider_Wall->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	BoxCollider_Wall->bApplyImpulseOnDamage = false;
	//BoxCollider_Wall->SetGenerateOverlapEvents(true);
	BoxCollider_Wall->ComponentTags.Add(FName("Wall"));

	//BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	//BoxCollider->SetupAttachment(RootComponent);
	//BoxCollider->SetRelativeLocation(FVector(0.0f, 0.0, 110.0f));
	//BoxCollider->SetRelativeScale3D(FVector(3.0f, 4.0f, 4.0f));
	//BoxCollider->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	//BoxCollider->bApplyImpulseOnDamage = false;
	//BoxCollider->SetGenerateOverlapEvents(true);
	//BoxCollider->ComponentTags.Add(FName("BoxCollider"));
	//BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ALV_Door::OnComponentBeginOverlap);
	//BoxCollider->OnComponentEndOverlap.AddDynamic(this, &ALV_Door::OnOverlapEnd);

	//�����
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("DoorAudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetupAttachment(DoorMesh);

	//���� ��������
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DoorFrame(TEXT("StaticMesh'/Game/Victorian_House/Meshes/HouseElements/Mesh_Door_Frame_02.Mesh_Door_Frame_02'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Door(TEXT("StaticMesh'/Game/Victorian_House/Meshes/HouseElements/Mesh_Door_02.Mesh_Door_02'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Knob(TEXT("StaticMesh'/Game/Victorian_House/Meshes/DecorativeElements/Mesh_Knob_1.Mesh_Knob_1'"));
	static ConstructorHelpers::FObjectFinder<USoundCue> SoundCue_CloseDoor(TEXT("SoundCue'/Game/Victorian_House/Audio/Cues/Cue_CloseDoor_01.Cue_CloseDoor_01'"));
	static ConstructorHelpers::FObjectFinder<USoundCue> SoundCue_OpenDoor(TEXT("SoundCue'/Game/Victorian_House/Audio/Cues/Cue_OpenDoor_01.Cue_OpenDoor_01'"));

	if (DoorFrame.Succeeded())
	{
		DoorFrameMesh->SetStaticMesh(DoorFrame.Object);
	}
	if (Door.Succeeded())
	{
		DoorMesh->SetStaticMesh(Door.Object);
	}
	if (Knob.Succeeded())
	{
		KnobMesh->SetStaticMesh(Knob.Object);
	}
	if (SoundCue_CloseDoor.Succeeded())
	{
		CloseSound = SoundCue_CloseDoor.Object;
	}
	if (SoundCue_OpenDoor.Succeeded())
	{
		OpenSound = SoundCue_OpenDoor.Object;
	}

	//���� �ʱ�ȭ
	close = FRotator(0.0f, -closeSpeed, 0.0f);

	isKnob = false;
}

// Called when the game starts or when spawned
void ALV_Door::BeginPlay()
{
	Super::BeginPlay();
	CurrentRotation = DoorMesh->RelativeRotation.Yaw;

}

// Called every frame
void ALV_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (lock)
	{
		Max_Yaw = 1.0f;
	}
	else
	{
		Max_Yaw = 90.0f;
	}

	//���� �������Ǹ� ���� �հ� ���� ���� ��ġ�� ������
	if (Hand)
	{
		PreviousTransform = CurrentTransform; //���� ���� ������ ����
		CurrentTransform = Hand->GetComponentTransform(); //���� ���� ������ ����
		if (MotionController->GetWantsToGrip())
		{
			if (openSoundCount == 0 && CurrentRotation <= 0.1f)
			{
				AudioComponent->SetSound(OpenSound);
				AudioComponent->Play();
				openSoundCount++;
			}
			CalculateDoorSpeed();
			SetDoorDirection();
		}
	}

	if (CurrentRotation != DoorMesh->RelativeRotation.Yaw)
	{
		//�ش� ������ ���ݾ� �̵�
		FollowingCurrentRotation();
	}
	NormalizationDoorLocation();
}

void ALV_Door::FollowingCurrentRotation()
{

	float yaw = FMath::Lerp<float, float>(DoorMesh->RelativeRotation.Yaw, CurrentRotation, followingSpeed);
	DoorMesh->SetRelativeRotation(FRotator(0.0f, yaw, 0.0f));
}

void ALV_Door::SetUnlockDoor()
{
	lock = false;
}

void ALV_Door::SetlockDoor()
{
	lock = true;
}

void ALV_Door::SetCurrentRotation(float rotate_Yaw, float speed)
{
	CurrentRotation = rotate_Yaw;
	followingSpeed = speed;
}

//���� ������ �ִ� �ӵ��� ����ؼ� �ڿ������� ���ش�.
void ALV_Door::CalculateDoorSpeed()
{
	preX = PreviousTransform.GetLocation().X - KnobMesh->GetComponentLocation().X;
	preY = PreviousTransform.GetLocation().Y - KnobMesh->GetComponentLocation().Y;
	curX = CurrentTransform.GetLocation().X - KnobMesh->GetComponentLocation().X;
	curY = CurrentTransform.GetLocation().Y - KnobMesh->GetComponentLocation().Y;
	door = FVector2D(preX, preY);
	hands = FVector2D(curX, curY);
	handsqrt = sqrt(hands.X*hands.X + hands.Y * hands.Y);

	//������
	temp2D = FVector::DotProduct(FVector(hands.X, hands.Y, 0.0f), KnobMesh->GetRelativeTransform().GetRotation().GetForwardVector());
}

void ALV_Door::SetDoorDirection()
{
	float yaw = DoorMesh->GetComponentRotation().Yaw;

	if (0 <= yaw && yaw < 180.0f)
	{
		if (temp2D >= 0)
		{
			step = FRotator(0.0f, stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
		else if (temp2D < 0)
		{
			step = FRotator(0.0f, -stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
	}
	else if (-180.0f <= yaw && yaw < 0.0f)
	{
		if (temp2D >= 0)
		{
			step = FRotator(0.0f, -stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
		else if (temp2D < 0)
		{
			step = FRotator(0.0f, stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
	}

	/*if (GrapedKnob->ComponentHasTag("GrapSphere1"))
	{
		if (temp2D > 0)
		{
			step = FRotator(0.0f, -stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
		else
		{
			step = FRotator(0.0f, stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
	}
	else if (GrapedKnob->ComponentHasTag("GrapSphere2"))
	{
		if (temp2D > 0)
		{
			step = FRotator(0.0f, stepSpeed*handsqrt, 0.0f);
			OpenCloseDoor();
		}
		else
		{
			step = FRotator(0.0f, -stepSpeed * handsqrt, 0.0f);
			OpenCloseDoor();
		}
	}*/
}

//���� ���� ������ ȸ������ ��������
void ALV_Door::OpenCloseDoor()
{
	if (CurrentRotation <= Max_Yaw && CurrentRotation >= Min_Yaw)
	{
		DoorMesh->AddRelativeRotation(step, true, nullptr, ETeleportType::None);
		CurrentRotation = DoorMesh->RelativeRotation.Yaw;
	}
}

//���� ȸ�� ���� + �ڵ����� ������
void ALV_Door::NormalizationDoorLocation()
{
	//ȸ�� ���� ����
	//CurrentRotation = DoorMesh->RelativeRotation.Yaw;
	if (CurrentRotation > Max_Yaw)
	{
		DoorMesh->SetRelativeRotation(FRotator(0.0f, Max_Yaw - 0.2f, 0.0f), true, nullptr, ETeleportType::None);
		CurrentRotation = Max_Yaw - 0.2f;
	}
	else if (CurrentRotation < Min_Yaw)
	{
		DoorMesh->SetRelativeRotation(FRotator(0.0f, 0.2f, 0.0f), true, nullptr, ETeleportType::None);
		CurrentRotation = 0.2f;
		openSoundCount = 0;
	}
	if (!Hand)
	{
		if (!stay)
		{
			//�ڵ� ������ ���
			if (CurrentRotation > Min_Yaw + closeSpeed && CurrentRotation <= Max_Yaw)
			{
				DoorMesh->AddRelativeRotation(close, true, nullptr, ETeleportType::None);
				CurrentRotation -= closeSpeed;
				if (CurrentRotation <= 5.0f && closeSoundCount == 0)
				{
					AudioComponent->SetSound(CloseSound);
					AudioComponent->Play();
					closeSoundCount++;
				}
			}

			if (CurrentRotation <= closeSpeed)
			{
				DoorMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
				CurrentRotation = 0.0f;
			}
		}
	}
}

void ALV_Door::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp->ComponentHasTag("KnobMesh") && OtherComp->ComponentHasTag("Hand"))
	{
		//		print("test");
		isKnob = true;
		Hand = OtherComp;
		MotionController = Cast<ATP_MotionController>(Hand->GetOwner());
		closeSoundCount = 0;
		//andMesh = MotionController->GetHandMesh();
		//MotionController->GetComponentByClass(TSubclassOf<USkeletalMeshComponent> ATP_MotionController);
	}
	//	if ((OverlappedComp->ComponentHasTag("GrapSphere1") || OverlappedComp->ComponentHasTag("GrapSphere2")) && OtherComp->ComponentHasTag("Hand"))
	//	{
	////		print("test");
	//		GrapedKnob = OverlappedComp;
	//		Hand = OtherComp;
	//		MotionController = Cast<ATP_MotionController>(Hand->GetOwner());
	//		closeSoundCount = 0;
	//		//andMesh = MotionController->GetHandMesh();
	//		//MotionController->GetComponentByClass(TSubclassOf<USkeletalMeshComponent> ATP_MotionController);
	//	}
		//stay��� �� �ݸ��� ó��
		//if (OverlappedComp->ComponentHasTag("BoxCollider") && OtherComp->GetName() == "TP_VirtualRealityPawn_Motion")
		//{
		//	stay = true;
		//}
		//if (OtherComp->ComponentHasTag("Holder_Lantern") && OverlappedComp->ComponentHasTag("BoxCollider"))
		//{
		//	stay = true;
		//}
}

void ALV_Door::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OverlappedComp->ComponentTags.Contains("KnobMesh") && OtherComp->ComponentHasTag("Hand"))
	{
		isKnob = false;
		GrapedKnob = NULL;
		Hand = NULL;
	}
	//if (OverlappedComp->GetName() == "BoxCollider")
	//{
	//	stay = false;
	//}

}

void ALV_Door::Set_WorldLocation(FVector _vector)
{
	DoorFrameMesh->SetWorldLocation(_vector);
}