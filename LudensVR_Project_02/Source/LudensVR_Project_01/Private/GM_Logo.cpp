// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "GM_Logo.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "Blueprint/UserWidget.h"
#include "GM_LogoWidget.h"




// Sets default values
AGM_Logo::AGM_Logo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Logo(TEXT("WidgetBlueprint'/Game/Natalis/Logo/LudensVR_Logo.LudensVR_Logo_C'"));


	widget = CreateDefaultSubobject< UWidgetComponent>(TEXT("LobbyWidget"));
	RootComponent = widget;

	widget->SetVisibility(true);
	widget->SetDrawSize(FVector2D(1525.0f, 924.0f));
	widget->SetRelativeLocation(FVector(-1350.0f, 1450.0f, 4100.f));
	widget->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));

	//오디오
	AudioComponent1 = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent1"));
	AudioComponent1->bAutoActivate = false;
	AudioComponent1->SetupAttachment(RootComponent);

	LogoWidget_Class = WB_Logo.Class;


	if (WB_Logo.Succeeded())
	{
		widget->SetWidgetClass(LogoWidget_Class);
	}

	//끼이이익
	static ConstructorHelpers::FObjectFinder<USoundCue> _Sound_Event_DooDoong(TEXT("SoundCue'/Game/Audios/Cue/W_Bang_Explosion__Metallic_Cue.W_Bang_Explosion__Metallic_Cue'"));

	if (_Sound_Event_DooDoong.Succeeded())
	{
		Sound_Event_DooDoong = _Sound_Event_DooDoong.Object;
	}

}

// Called when the game starts or when spawned
void AGM_Logo::BeginPlay()
{
	Super::BeginPlay();
	
	////Create Widget
	m_LogoWidget = CreateWidget <UGM_LogoWidget>(GetWorld(), LogoWidget_Class);
	widget->SetWidget(m_LogoWidget);
	m_LogoWidget->PlayAnimationByName(FName("FadeInOut"),2.0f,1,EUMGSequencePlayMode::Forward,1.0f);
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AGM_Logo::PlayDooDoong, 5.5f, false);
	//m_LogoWidget->PlayAnimation(m_LogoWidget->FadeInOutAnim);

}

void AGM_Logo::PlayDooDoong()
{
	AudioComponent1->SetWorldLocation(FVector(-960.0f, 611.0f, 548.0f));
	AudioComponent1->SetSound(Sound_Event_DooDoong);
	AudioComponent1->Play();
}

void AGM_Logo::PlayAnimOutro()
{
	widget->SetRelativeLocation(FVector(-98.3f, 2539.5f, 4100.f));
	widget->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	m_LogoWidget->PlayAnimationByName(FName("Outro"), 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &AGM_Logo::PlayDooDoong, 0.0f, false);
}

