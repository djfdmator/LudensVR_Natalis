// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_InteractionInterface.h"
#include "LV_Event.h"
#include "LV_NewsPaper.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_NewsPaper : public AActor, public ITP_InteractionInterface
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Pickup", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PickupMesh;

public:
	// Sets default values for this actor's properties
	ALV_NewsPaper();

	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	virtual void Drop_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
		ALV_Event* Event;

};

