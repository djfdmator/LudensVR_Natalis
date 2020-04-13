// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_DiaryWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/Image.h"
#include "Blueprint/WidgetTree.h"
#include "Classes/Engine/Texture2D.h"

#include "Engine.h"



#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))




ULV_DiaryWidget::ULV_DiaryWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> UT_Newspaper01(TEXT("Texture2D'/Game/Natalis/Diary/Diary_Object/Diary_Object_01_Front.Diary_Object_01_Front'"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> UT_ChildPaint01(TEXT("Texture2D'/Game/Natalis/Diary/Diary_Object/Diary_Object_02_1.Diary_Object_02_1'"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> UT_ChildPaint02(TEXT("Texture2D'/Game/Natalis/Diary/Diary_Object/Diary_Object_02_2_ver_2.Diary_Object_02_2_ver_2'"));


	if (UT_Newspaper01.Succeeded())
	{
		Sub_Newspaper01 = UT_Newspaper01.Object;
	}
	if (UT_ChildPaint01.Succeeded())
	{
		Sub_ChildPaint01 = UT_ChildPaint01.Object;
	}
	if (UT_ChildPaint02.Succeeded())
	{
		Sub_ChildPaint02 = UT_ChildPaint02.Object;
	}

	if (Image_Check01)
		Image_Check01 = nullptr;
	if (Image_Check02)
		Image_Check02 = nullptr;
	if (Image_Newspaper01)
		Image_Newspaper01 = nullptr;
	if (Image_ChildPaint)
		Image_ChildPaint = nullptr;
}

void ULV_DiaryWidget::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	
}

void ULV_DiaryWidget::Check1_Opacity(float alpha)
{
	if (Image_Check01) 
	{
		Image_Check01->SetRenderOpacity(alpha);
	}
}

void ULV_DiaryWidget::Check2_Opacity(float alpha)
{
	if (Image_Check02) 
	{
		Image_Check02->SetRenderOpacity(alpha);
	}
}
void ULV_DiaryWidget::Newspaper01_Opacity(float alpha)
{
	
	if (Image_Newspaper01)
	{
		//print("bb");
		Image_Newspaper01->SetRenderOpacity(alpha);
	}
}

void ULV_DiaryWidget::ChildPaint_Opacity(float alpha)
{
	if (Image_ChildPaint)
	{
		Image_ChildPaint->SetRenderOpacity(alpha);
	}
}

void ULV_DiaryWidget::ChangePaint()
{
	if (Image_ChildPaint)
	{
		Image_ChildPaint->SetBrushFromTexture(Sub_ChildPaint02);
	}
}

