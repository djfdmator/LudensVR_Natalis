// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "GM_LogoWidget.h"
#include "Animation/WidgetAnimation.h"
//#include "Animation/UMGSequencePlayer.h"
#include "Engine.h"



#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))



UGM_LogoWidget::UGM_LogoWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//if (FadeInOutAnim)
	//{
	//	FadeInOutAnim = nullptr;
	//}


}


void UGM_LogoWidget::NativeConstruct()
{
	FillAnimationsMap();
	//PlayAnimationByName(FName("FadeInOut"), 1.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	Super::NativeConstruct();

	/*TMap<FString, UWidgetAnimation*> map;
	map.Add(FString(TEXT("FadeInOut")), FadeInOutAnim);
	GetAnimations(map);*/
	//printf("%s",FadeInOutAnim->GetFName().ToString());

}
//void UGM_LogoWidget::GetAnimations(TMap<FString, UWidgetAnimation*>& OutResults)
//{
//	OutResults.Empty();
//
//	UProperty* Property = GetClass()->PropertyLink;
//	while (Property != nullptr)
//	{
//		if (Property->GetClass() == UObjectProperty::StaticClass())
//		{
//			UObjectProperty* ObjectProperty = Cast<UObjectProperty>(Property);
//
//			if (ObjectProperty->PropertyClass == UWidgetAnimation::StaticClass())
//			{
//				UObject* Object = ObjectProperty->GetObjectPropertyValue_InContainer(this);
//				UWidgetAnimation* WidgetAnimation = Cast<UWidgetAnimation>(Object);
//
//				if (WidgetAnimation != nullptr)
//				{
//					FString Name = WidgetAnimation->GetMovieScene()->GetFName().ToString();
//					OutResults.Add(Name, WidgetAnimation);
//				}
//			}
//		}
//
//		Property = Property->PropertyLinkNext;
//	}
//}

void UGM_LogoWidget::FillAnimationsMap()
{
	AnimationsMap.Empty();

	UProperty* Prop = GetClass()->PropertyLink;
	
	// Run through all properties of this class to find any widget animations
	while (Prop != nullptr)
	{
		// Only interested in object properties
		if (Prop->GetClass() == UObjectProperty::StaticClass())
		{
			UObjectProperty* ObjProp = Cast<UObjectProperty>(Prop);

			// Only want the properties that are widget animations
			if (ObjProp->PropertyClass == UWidgetAnimation::StaticClass())
			{
				UObject* Obj = ObjProp->GetObjectPropertyValue_InContainer(this);

				UWidgetAnimation* WidgetAnim = Cast<UWidgetAnimation>(Obj);

				if (WidgetAnim != nullptr && WidgetAnim->MovieScene != nullptr)
				{
					FName AnimName = WidgetAnim->MovieScene->GetFName();
					//print(AnimName.ToString());
					AnimationsMap.Add(AnimName, WidgetAnim);
				}
			}
		}

		Prop = Prop->PropertyLinkNext;
	}
}
UWidgetAnimation* UGM_LogoWidget::GetAnimationByName(FName AnimationName) const
{
	UWidgetAnimation* const* WidgetAnim = AnimationsMap.Find(AnimationName);
	if (WidgetAnim)
	{
		return *WidgetAnim;
	}
	return nullptr;
}


bool UGM_LogoWidget::PlayAnimationByName(FName AnimationName,
	float StartAtTime,
	int32 NumLoopsToPlay,
	EUMGSequencePlayMode::Type PlayMode,
	float PlaybackSpeed)
{
	UWidgetAnimation* WidgetAnim = GetAnimationByName(AnimationName);
	if (WidgetAnim)
	{
		PlayAnimation(WidgetAnim);
		return true;
	}
	return false;
}


//bool UGM_LogoWidget::PlayAnimationByName(FName AnimationName,
//	float StartAtTime,
//	int32 NumLoopsToPlay,
//	EUMGSequencePlayMode::Type PlayMode,
//	float PlaybackSpeed)
//{
//	UWidgetAnimation* WidgetAnim = GetAnimationByName(AnimationName);
//	if (WidgetAnim)
//	{
//		PlayAnimation(WidgetAnim, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed);
//		return true;
//	}
//	return false;
//}