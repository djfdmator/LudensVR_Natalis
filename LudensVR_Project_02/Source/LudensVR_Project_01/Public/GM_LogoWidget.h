// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GM_LogoWidget.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UGM_LogoWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UGM_LogoWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidgetAnim))
	//UPROPERTY(meta = (BindWidgetAnimation))
	//UPROPERTY(BlueprintReadWrite, meta=(BindWidgetAnimOptional))
	
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidgetAnim))
	//class UWidgetAnimation* FadeInOutAnim=nullptr;
	//
	//UFUNCTION()
	//	void GetAnimations(TMap<FString, UWidgetAnimation*>& OutResults);



	UWidgetAnimation* GetAnimationByName(FName AnimationName) const;

	bool PlayAnimationByName(FName AnimationName,
		float StartAtTime,
		int32 NumLoopsToPlay,
		EUMGSequencePlayMode::Type PlayMode,
		float PlaybackSpeed);

protected:
	TMap<FName, UWidgetAnimation*> AnimationsMap;

	void FillAnimationsMap();



};
