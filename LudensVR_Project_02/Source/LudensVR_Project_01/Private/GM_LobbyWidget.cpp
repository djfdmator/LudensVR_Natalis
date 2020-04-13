// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "GM_LobbyWidget.h"
#include "LV_Event.h"
#include "TP_MotionController.h"
#include "GM_Lobby.h"
#include "Components/Button.h"
#include "Components/Image.h"

#include "Engine.h"



#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))



void UGM_LobbyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//print("start");

	


	startButton->OnClicked.AddDynamic(this, &UGM_LobbyWidget::OnClick_StartButton);
	quitButton->OnClicked.AddDynamic(this, &UGM_LobbyWidget::OnClick_QuitButton);
	//if(!quitButton->OnClicked.IsBound())
	//Image_1->SetRenderOpacity(0.0f);
}


void UGM_LobbyWidget::OnClick_StartButton()
{
	
	//event
	TActorIterator<ALV_Event> ActorItr1(GetWorld());
	ActorItr1->GameStart_IncreaseEventIndex();

	//interaction widget Off
	TActorIterator<ATP_MotionController> ActorItr2(GetWorld());
	ActorItr2->TurnOffInteraction(false);
	++ActorItr2;
	ActorItr2->TurnOffInteraction(false);


	//Widget Off
	TActorIterator<AGM_Lobby> ActorItr3(GetWorld());
	ActorItr3->SwitchWidget(false);

}
void UGM_LobbyWidget::OnClick_QuitButton()
{

	GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
}


