// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_InteractionInterface.h"
#include "LV_Lantern.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Lantern : public AActor, public ITP_InteractionInterface
{
	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lantern", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* LanternMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lantern", meta = (AllowPrivateAccess = "true"))
		class USpotLightComponent* SpotLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lantern", meta = (AllowPrivateAccess = "true"))
		class USpotLightComponent* SpotLightAssistant;


	// Light
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpotLight", meta = (AllowPrivateAccess = "true"))
		float Light_Internsity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpotLight", meta = (AllowPrivateAccess = "true"))
		float Light_Color_R;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpotLight", meta = (AllowPrivateAccess = "true"))
		float Light_Color_G;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpotLight", meta = (AllowPrivateAccess = "true"))
		float Light_Color_B;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SpotLight", meta = (AllowPrivateAccess = "true"))
		float Light_Length;
	
public:	
	// Sets default values for this actor's properties
	ALV_Lantern();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	//Ãß°¡
	UFUNCTION()
	void Light_Switch();

};
