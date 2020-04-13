// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "GM_Lobby.h"


#include "GM_LobbyWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/WidgetComponent.h"
#include "Components/SceneComponent.h"
#include "Blueprint/UserWidget.h"




// Sets default values
AGM_Lobby::AGM_Lobby()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<UUserWidget> WB_Lobby(TEXT("WidgetBlueprint'/Game/Natalis/Lobby/BP_LobbyWidget.BP_LobbyWidget_C'"));


	widget = CreateDefaultSubobject< UWidgetComponent>(TEXT("LobbyWidget"));
	RootComponent = widget;
	
	widget->SetVisibility(true);
	widget->SetDrawSize(FVector2D(250.0f, 230.0f));

	if (WB_Lobby.Succeeded())
	{
		widget->SetWidgetClass(WB_Lobby.Class);
	}

}

// Called when the game starts or when spawned
void AGM_Lobby::BeginPlay()
{
	Super::BeginPlay();

	SwitchWidget(true);
	
}

void AGM_Lobby::SwitchWidget(bool OnOff)
{
	widget->SetVisibility(OnOff);
}

