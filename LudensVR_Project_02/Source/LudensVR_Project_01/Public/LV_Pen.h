// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_InteractionInterface.h"
#include "LV_Pen.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Pen : public AActor, public ITP_InteractionInterface
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pen", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PenMesh;


	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pen", meta = (AllowPrivateAccess = "true"))
	//	class UWidgetInteractionComponent* Interaction;	


public:
	// Sets default values for this actor's properties
	ALV_Pen();

	virtual void Pickup_Implementation(class USceneComponent* AttachTo);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_Pen;




	
};
