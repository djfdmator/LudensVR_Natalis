// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GM_Lobby.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API AGM_Lobby : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lobby", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* widget;
	
public:	
	// Sets default values for this actor's properties
	AGM_Lobby();

	void SwitchWidget(bool OnOff );

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	
	
};
