// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Event.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundCue.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Components/StaticMeshComponent.h"
#include "Components/AudioComponent.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "GameFramework/PlayerController.h"


// Sets default values
ALV_Event::ALV_Event()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EventManager = CreateDefaultSubobject<UBoxComponent>(TEXT("EventManager"));
	EventManager->SetMobility(EComponentMobility::Static);
	EventManager->ComponentTags.Add(FName("EventManager"));
	RootComponent = EventManager;


	Trigger_Event_Start = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event_Start"));
	Trigger_Event_Start->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event_Start->ComponentTags.Add(FName("Trigger_Event_Start"));
	Trigger_Event_Start->SetNotifyRigidBodyCollision(true);
	Trigger_Event_Start->SetGenerateOverlapEvents(true);
	Trigger_Event_Start->SetSimulatePhysics(false);
	Trigger_Event_Start->SetWorldLocation(FVector(-530.0f, 219.0f, 660.0f));
	Trigger_Event_Start->SetRelativeScale3D(FVector(1.0f, 5.0f, 3.0f));
	Trigger_Event_Start->bApplyImpulseOnDamage = false;
	Trigger_Event_Start->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event_Start->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);


	Trigger_Event0 = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event0"));
	Trigger_Event0->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event0->ComponentTags.Add(FName("Trigger_Event0"));
	Trigger_Event0->SetNotifyRigidBodyCollision(true);
	Trigger_Event0->SetGenerateOverlapEvents(true);
	Trigger_Event0->SetSimulatePhysics(false);
	Trigger_Event0->SetWorldLocation(FVector(-1350.0f, 234.0f, 650.0f));
	Trigger_Event0->SetRelativeScale3D(FVector(1.0f, 10.0f, 3.0f));
	Trigger_Event0->bApplyImpulseOnDamage = false;
	Trigger_Event0->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event0->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	Trigger_Event1 = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event1"));
	Trigger_Event1->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event1->ComponentTags.Add(FName("Trigger_Event1"));
	Trigger_Event1->SetNotifyRigidBodyCollision(true);
	Trigger_Event1->SetGenerateOverlapEvents(true);
	Trigger_Event1->SetSimulatePhysics(false);
	Trigger_Event1->SetWorldLocation(FVector(-1330.0f, -400.0f, 643.0f));
	Trigger_Event1->SetRelativeScale3D(FVector(5.0f, 5.0f, 3.0f));
	Trigger_Event1->bApplyImpulseOnDamage = false;
	Trigger_Event1->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event1->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	Trigger_Event2 = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event2"));
	Trigger_Event2->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event2->ComponentTags.Add(FName("Trigger_Event2"));
	Trigger_Event2->SetNotifyRigidBodyCollision(true);
	Trigger_Event2->SetGenerateOverlapEvents(true);
	Trigger_Event2->SetSimulatePhysics(false);
	Trigger_Event2->SetWorldLocation(FVector(-828.0f, -633.0f, 660.0f));
	Trigger_Event2->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	Trigger_Event2->bApplyImpulseOnDamage = false;
	Trigger_Event2->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event2->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	Trigger_Event3 = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event3"));
	Trigger_Event3->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event3->ComponentTags.Add(FName("Trigger_Event3"));
	Trigger_Event3->SetNotifyRigidBodyCollision(true);
	Trigger_Event3->SetGenerateOverlapEvents(true);
	Trigger_Event3->SetSimulatePhysics(false);
	Trigger_Event3->SetWorldLocation(FVector(-920.0f, 940.0f, 650.0f));
	Trigger_Event3->SetRelativeScale3D(FVector(5.0f, 5.0f, 3.0f));
	Trigger_Event3->bApplyImpulseOnDamage = false;
	Trigger_Event3->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event3->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	Trigger_Event4 = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event4"));
	Trigger_Event4->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event4->ComponentTags.Add(FName("Trigger_Event4"));
	Trigger_Event4->SetNotifyRigidBodyCollision(true);
	Trigger_Event4->SetGenerateOverlapEvents(true);
	Trigger_Event4->SetSimulatePhysics(false);
	Trigger_Event4->SetWorldLocation(FVector(-960.0f, 470.0f, 650.0f));
	Trigger_Event4->SetRelativeScale3D(FVector(5.0f, 1.0f, 3.0f));
	Trigger_Event4->bApplyImpulseOnDamage = false;
	Trigger_Event4->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event4->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	Trigger_Event_End = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Event_End"));
	Trigger_Event_End->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Trigger_Event_End->ComponentTags.Add(FName("Trigger_Event_End"));
	Trigger_Event_End->SetNotifyRigidBodyCollision(true);
	Trigger_Event_End->SetGenerateOverlapEvents(true);
	Trigger_Event_End->SetSimulatePhysics(false);
	Trigger_Event_End->SetWorldLocation(FVector(-790.0f, -680.0f, 85.0f));
	Trigger_Event_End->SetRelativeScale3D(FVector(2.0f, 3.0f, 4.0f));
	Trigger_Event_End->bApplyImpulseOnDamage = false;
	Trigger_Event_End->OnComponentBeginOverlap.AddDynamic(this, &ALV_Event::OnComponentBeginOverlap);
	Trigger_Event_End->OnComponentEndOverlap.AddDynamic(this, &ALV_Event::OnOverlapEnd);

	//¿Àµð¿À
	AudioComponent1 = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent1"));
	AudioComponent1->bAutoActivate = false;
	AudioComponent1->SetupAttachment(RootComponent);

	AudioComponent2 = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent2"));
	AudioComponent2->bAutoActivate = false;
	AudioComponent2->SetupAttachment(RootComponent);

	//BGM
	BGM_AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("BGM_AudioComponent"));
	BGM_AudioComponent->bAutoActivate = false;
	BGM_AudioComponent->SetupAttachment(RootComponent);

	//³¢ÀÌÀÌÀÍ
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_Start_OpenDoor(TEXT("SoundCue'/Game/Victorian_House/Audio/Cues/Cue_OpenDoor_02.Cue_OpenDoor_02'"));
	//³¢ÀÌÀÍÄç
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_Start_CloseDoor(TEXT("SoundCue'/Game/Victorian_House/Audio/Cues/Cue_CloseDoor_01.Cue_CloseDoor_01'"));
	//Ã¶ÄÀÃ¶ÄÀ
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_OpenDoor(TEXT("SoundCue'/Game/Victorian_House/Audio/Cues/Cue_OpenDoor_01.Cue_OpenDoor_01'"));
	//²¥¸£¸¤
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_ChildLaughing(TEXT("SoundCue'/Game/Audios/Cue/Cue_Child_Laughing_Cue.Cue_Child_Laughing_Cue'"));
	//Ã¬±×¶û
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_LightbulbBroken(TEXT("SoundCue'/Game/Audios/Cue/lightbulb_broken_Cue.lightbulb_broken_Cue'"));
	//¿ì¾î¾î¾î¾î¾î~
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_BGMHorror5(TEXT("SoundCue'/Game/HorrorGameSoundPack/SoundPackCue/Background/Wav_Background5_Cue.Wav_Background5_Cue'"));
	
	static ConstructorHelpers::FObjectFinder<USoundCue> Sound_BGMHorror4(TEXT("SoundCue'/Game/HorrorGameSoundPack/SoundPackCue/ScarySounds/Scary_Sounds4_Cue.Scary_Sounds4_Cue'"));

	if (Sound_Start_OpenDoor.Succeeded())
	{
		Sound_Event_Start_OpenDoor = Sound_Start_OpenDoor.Object;
	}
	if (Sound_Start_CloseDoor.Succeeded())
	{
		Sound_Event_Start_CloseDoor = Sound_Start_CloseDoor.Object;
	}
	if (Sound_ChildLaughing.Succeeded())
	{
		Sound_Child_Laughing = Sound_ChildLaughing.Object;
	}
	if (Sound_OpenDoor.Succeeded())
	{
		Sound_Open_Door = Sound_OpenDoor.Object;
	}
	if (Sound_BGMHorror5.Succeeded())
	{
		Sound_BGM_Horror5 = Sound_BGMHorror5.Object;
	}	
	if (Sound_BGMHorror4.Succeeded())
	{
		Sound_BGM_Horror4 = Sound_BGMHorror4.Object;
	}
	if (Sound_LightbulbBroken.Succeeded())
	{
		Sound_Lightbulb_Broken = Sound_LightbulbBroken.Object;
	}
}

// Called when the game starts or when spawned
void ALV_Event::BeginPlay()
{
	Super::BeginPlay();

	//Door_Event0 = FindObject<ALV_Door>(GetWorld()->GetOuter().,"LV_Door4");
	for (TActorIterator<ALV_Door> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		if (!ActorItr->GetName().Compare("LV_Door1_2"))
			Door_Event0 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door4"))
			Door_Event1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door5"))
			Door_Event2 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door6"))
			Door_Event3 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door8"))
			Door_Event4 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door10"))
			Door_Event5 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Door_1"))
			Door_Event6 = *ActorItr;
	}

	for (TActorIterator<ALV_Wall> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		if (!ActorItr->GetName().Compare("LV_Wall_1"))
			Wall_1_1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Wall_3"))
			Wall_1_2 = *ActorItr;

		if (!ActorItr->GetName().Compare("LV_Wall_5"))
			Wall_2_1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Wall_7"))
			Wall_2_2 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Wall_9"))
			Wall_2_3 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Wall_11"))
			Wall_2_4 = *ActorItr;

		if (!ActorItr->GetName().Compare("LV_Wall_13"))
			Wall_3_1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Wall_15"))
			Wall_3_2 = *ActorItr;
	}

	for (TActorIterator<ALV_Lamp> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		if (!ActorItr->GetName().Compare("LV_Lamp_1"))
			Lamp_1 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Lamp_2"))
			Lamp_2 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Lamp_4"))
			Lamp_3 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Lamp5"))
			Lamp_4 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Lamp_3"))
			Lamp_5 = *ActorItr;
		if (!ActorItr->GetName().Compare("LV_Lamp_5"))
			Lamp_6 = *ActorItr;

	}

	for (TActorIterator<ALV_VirtualRealityCharacter> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		//Pawn = *ActorItr;-----------
		Character = *ActorItr;
	}
	for (TActorIterator<ALV_Mannequin> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (!ActorItr->GetName().Compare("LV_Mannequin1"))
		manne = *ActorItr;
	}
	for (TActorIterator<AGM_Logo> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		if (!ActorItr->GetName().Compare("GM_Logo1"))
		Logo = *ActorItr;
	}

	//manne->Set_WorldLocation(-50.f);
}

// Called every frame
void ALV_Event::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (eventIndex)
	{
	case -1:
		if (!isIntro)
		{
			GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Event::Intro, 10.0f, false);
			//Pawn->SetRightInteraction(false);------------
			Character->SetRightInteraction(false);
			isIntro = true;
		}
		break;
	case 0:
		Event0();
		break;
	case 1:
		Event1();
		break;
	case 2:
		Event2();
		break;
	case 3:
		Event3();
		break;
	case 4:
		Event4();
		break;
	case 5:
		Event5();
		break;
	case 6:
		Event_end();
		break;
	default:
		break;
	}
}
void ALV_Event::Intro()
{
	/*Pawn->MovePosition(FVector(30.0f, 150.0f, 550.0f), FRotator(0.0f, 210.0f, 0.0f));
	Pawn->SetRightInteraction(true);*/
	Character->MovePosition(FVector(30.0f, 150.0f, 550.0f), FRotator(0.0f, 210.0f, 0.0f));
	Character->SetRightInteraction(true);
}
void ALV_Event::Outro()
{
	BGM_AudioComponent->Stop();
	/*Pawn->MovePosition(FVector(-95.0f, 1470.0f, 4020.0f), FRotator(0.0f, 300.0f, 0.0f));
	Pawn->SetRightInteraction(false);*/
	Character->MovePosition(FVector(-95.0f, 1470.0f, 4020.0f), FRotator(0.0f, 300.0f, 0.0f));
	Character->SetRightInteraction(false);
	Logo->PlayAnimOutro();
}
//Ã¹ ½ÃÀÛ
void ALV_Event::Event0()
{
	Lamp_1->OnBlink(4.0f, ALV_Lamp::BlinkType::All);
	Door_Event0->SetUnlockDoor();
	Door_Event0->SetCurrentRotation(45.0f, 0.005f);
	AudioComponent1->SetWorldLocation(FVector(-270.0f, 220.0f, 548.0f));
	AudioComponent1->SetSound(Sound_Event_Start_OpenDoor);
	AudioComponent1->Play();
	eventIndex++;
}

void ALV_Event::DoorClosed()
{
	Door_Event0->SetCurrentRotation(0.0f, 0.1f);
	AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
	AudioComponent1->Play();
	Trigger_Event_Start->DestroyComponent();
	AudioComponent1->SetWorldLocation(FVector(-960.0f, 611.0f, 548.0f));
	Door_Event0->SetlockDoor();
}

void ALV_Event::Event1()
{
	if (event_1_start)
	{
		Door_Event1->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetWorldLocation(FVector(-1130.0f, 320.0f, 548.0f));
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Trigger_Event0->DestroyComponent();
		Door_Event1->SetlockDoor();

		Wall_1_1->Set_WorldLocation(FVector(-800.0f, 400.0f, 548.0f));
		Wall_1_2->Set_WorldLocation(FVector(-800.0f, 200.0f, 548.0f));

		Wall_2_1->Set_WorldLocation(FVector(-922.0f, 427.0f, 1548.0f));
		Wall_2_2->Set_WorldLocation(FVector(-1122.0f, 427.0f, 1548.0f));
		Wall_2_3->Set_WorldLocation(FVector(-747.0f, 40.0f, 1548.0f));
		Wall_2_4->Set_WorldLocation(FVector(-946.0f, 40.0f, 1548.0f));
		eventIndex++;
	}
}

void ALV_Event::GetFirstObject()
{
	triggerObject_1 = true;
	Door_Event2->SetCurrentRotation(45.0f, 0.005f);
	Door_Event2->SetUnlockDoor();
	AudioComponent1->SetWorldLocation(FVector(-1560.0f, -170.0f, 548.0f));
	AudioComponent1->SetSound(Sound_Event_Start_OpenDoor);
	AudioComponent1->Play();

	//
}

void ALV_Event::Event2()
{
	if (event_2_trigger1)
	{
		Door_Event2->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Trigger_Event1->DestroyComponent();
		Door_Event2->SetlockDoor();

		GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Event::Event2_2, 1.0f, false);
		eventIndex++;
	}
}

void ALV_Event::Event2_2()
{
	Door_Event3->SetUnlockDoor();
	Door_Event3->SetCurrentRotation(45.0f, 0.005f);
	AudioComponent2->SetWorldLocation(FVector(-1130.0f, -275.0f, 584.0f));
	AudioComponent2->SetSound(Sound_Child_Laughing);
	AudioComponent2->Play();
}

void ALV_Event::Event3()
{
	if (event_2_trigger2)
	{
		Door_Event3->SetCurrentRotation(0.0f, 0.1f);
		Door_Event4->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetWorldLocation(FVector(-790.0f, -680.0f, 548.0f));
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Trigger_Event2->DestroyComponent();
		Door_Event3->SetlockDoor();
		Door_Event4->SetlockDoor();

		Lamp_2->OnBlink(5.0f, ALV_Lamp::BlinkType::All);
		Lamp_3->OnBlink(5.0f, ALV_Lamp::BlinkType::All);
		Lamp_4->OnBlink(5.0f, ALV_Lamp::BlinkType::All);

		GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Event::Event3_2, 5.5f, false);
		eventIndex++;
	}
}

void ALV_Event::Event3_2()
{
	Lamp_2->TurnOnOff(false);
	Lamp_3->TurnOnOff(false);
	Lamp_4->TurnOnOff(true);

	AudioComponent1->SetWorldLocation(FVector(-960.0f, 611.0f, 548.0f));
	AudioComponent1->SetSound(Sound_Event_Start_OpenDoor);
	AudioComponent1->Play();
	Door_Event5->SetUnlockDoor();
	Door_Event5->SetCurrentRotation(45.0f, 0.005f);
}
//

void ALV_Event::Event4()
{
	if (event_3_trigger1)
	{
		Door_Event5->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Trigger_Event3->DestroyComponent();
		Door_Event5->SetlockDoor();

		Door_Event1->Set_WorldLocation(FVector(-1130.0f, 320.0f, 1548.0f));
		Door_Event3->Set_WorldLocation(FVector(-1130.0f, -276.0f, 1548.0f));

		Wall_3_1->Set_WorldLocation(FVector(-1120.0f, 220.0f, 548.0f));
		Wall_3_2->Set_WorldLocation(FVector(-1120.0f, -375.0f, 548.0f));

		eventIndex++;
	}
}

void ALV_Event::GetSecondObject()
{
	triggerObject_2 = true;

	Lamp_4->TurnOnOff(false);
	Lamp_3->TurnOnOff(true);
	Lamp_5->TurnOnOff(false);

	AudioComponent2->SetWorldLocation(FVector(-661.0f, 1046.0f, 800.0f));
	AudioComponent2->SetSound(Sound_Lightbulb_Broken);
	AudioComponent2->Play();

	Door_Event1->Set_WorldLocation(FVector(-1130.0f, 320.0f, 1548.0f));
	Door_Event3->Set_WorldLocation(FVector(-1130.0f, 320.0f, 1548.0f));

	Door_Event4->SetCurrentRotation(45.0f, 0.005f);
	Door_Event4->SetUnlockDoor();

	Door_Event5->SetCurrentRotation(45.0f, 0.005f);
	Door_Event5->SetUnlockDoor();
	AudioComponent1->SetSound(Sound_Event_Start_OpenDoor);
	AudioComponent1->Play();

	BGM_AudioComponent->SetSound(Sound_BGM_Horror5);
	BGM_AudioComponent->Play();
}

void ALV_Event::Event5()
{
	if (event_3_trigger2)
	{
		Door_Event5->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Trigger_Event4->DestroyComponent();
		Door_Event5->SetlockDoor();
		eventIndex++;
	}
}

void ALV_Event::Event_end()
{
	if (event_4_trigger1)
	{
		Door_Event4->SetCurrentRotation(0.0f, 0.1f);
		Door_Event6->SetCurrentRotation(0.0f, 0.1f);
		AudioComponent1->SetSound(Sound_Event_Start_CloseDoor);
		AudioComponent1->Play();
		Lamp_6->OnBlink(15.0f, ALV_Lamp::BlinkType::All);
		//ºê±Ý Àç»ý
		BGM_AudioComponent->SetSound(Sound_BGM_Horror4);
		BGM_AudioComponent->Play();
		Trigger_Event_End->DestroyComponent();
		GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Event::MannequinAnimation, 8.0f, false);
		//GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
		eventIndex++;
	}
}
void ALV_Event::MannequinAnimation()
{
	manne->Set_WorldLocation(-50.f);
	
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ALV_Event::Outro, 5.0f, false);
}

void ALV_Event::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event_Start") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		DoorClosed();
	}
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event0") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		event_1_start = true;
	}
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event1") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		event_2_trigger1 = true;
	}

	if (OverlappedComp->ComponentTags.Contains("Trigger_Event2") && OtherComp->ComponentHasTag("Hand"))
	{
		event_2_trigger2 = true;
	}
	//
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event3") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		event_3_trigger1 = true;
	}
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event4") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		if (event_3_trigger1 == true)
		{
			event_3_trigger2 = true;
		}
	}
	if (OverlappedComp->ComponentTags.Contains("Trigger_Event_End") && OtherComp->ComponentHasTag("CapsuleComponent"))
	{
		event_4_trigger1 = true;
	}

}

void ALV_Event::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}


void ALV_Event::GameStart_IncreaseEventIndex()
{
	eventIndex++;
}

bool ALV_Event::GetObject_1()
{
	return triggerObject_1;
}

bool ALV_Event::GetObject_2()
{
	return triggerObject_2;
}