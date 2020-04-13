// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "LV_DiaryWidget.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API ULV_DiaryWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	ULV_DiaryWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	// Optionally override the tick event
	//virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_Check01= nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_Check02= nullptr;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_LeftArrow;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_RightArrow;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_Newspaper01 = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UImage * Image_ChildPaint= nullptr;

	UFUNCTION()
		void Check1_Opacity(float alpha);
	UFUNCTION()
		void Check2_Opacity(float alpha);


	UFUNCTION()
		void Newspaper01_Opacity(float alpha);
	UFUNCTION()
		void ChildPaint_Opacity(float alpha);
	UFUNCTION()
		void ChangePaint();

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UTexture2D* Sub_Newspaper01;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UTexture2D* Sub_ChildPaint01;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
		class UTexture2D* Sub_ChildPaint02;
	
};
