// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GM_Logo.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGM_Logo : public AActor
{
	GENERATED_BODY()
	
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Logo", meta = (AllowPrivateAccess = "true"))
		class UWidgetComponent* widget;

	//오디오 컴포넌트
	UPROPERTY(EditAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent1;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Event_DooDoong;


public:	
	// Sets default values for this actor's properties
	AGM_Logo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	FTimerHandle MemberTimerHandle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UGM_LogoWidget* m_LogoWidget;

	TSubclassOf<class UUserWidget> LogoWidget_Class;

	void PlayAnimOutro();
	
	void PlayDooDoong();
};
