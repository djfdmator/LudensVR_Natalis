// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "GM_LobbyWidget.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UGM_LobbyWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	//UGM_Lobby(const FObjectInitializer& ObjectInitializer);



	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UButton * startButton = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UButton * quitButton = nullptr;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_1 = nullptr;

	UFUNCTION()
		void OnClick_QuitButton();

	UFUNCTION()
		void OnClick_StartButton();



	
};
