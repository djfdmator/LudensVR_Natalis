// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Classes/Components/PointLightComponent.h"
#include "Classes/Components/StaticMeshComponent.h"
#include "LV_Lamp.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Lamp : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALV_Lamp();

	enum BlinkType
	{
		Blink,
		Intensity,
		All
	};

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RadomOnTime();

	void RandomOffTime();

	void RandomIntensity();

	void RandomIntensityCycle();

	void OnBlink(float _onTime, BlinkType _blinkType);

	void TurnOnOff(bool _isOn);

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* LampMesh;

	UPROPERTY(EditAnywhere)
		UPointLightComponent* PointLightMesh;

	UMaterial* OffMaterial;
	UMaterial* OnMaterial;


	//켜짐을 유지하는 변수

	UPROPERTY(VisibleAnyWhere)
		int OnTimeCount = 0;
	UPROPERTY(VisibleAnyWhere)
		float OnTime = 0.5f;
	//꺼짐을 유지하는 변수
	UPROPERTY(VisibleAnyWhere)
		int OffTimeCount = 0;
	UPROPERTY(VisibleAnyWhere)
		float OffTime = 0.5;
	UPROPERTY(VisibleAnyWhere)
		bool OnOff = true;

	UPROPERTY(EditAnywhere, Category = "LightBlink")
		int blinkOnTimeCount = 0;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		float blinkOnTime = 0.0f;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		bool blinkOn = true;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		float Maximum_LightOnTime = 7.0f;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		float Minimum_LightOnTime = 0.3f;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		float Maximum_LightOffTime = 7.0f;
	UPROPERTY(EditAnywhere, Category = "LightBlink")
		float Minimum_LightOffTime = 0.3f;

	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		bool intensityBlinkOn = true;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		float Minimum_Intensity = 7.0f;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		float Maximum_Intensity = 20.0f;
	UPROPERTY(VisibleAnywhere, Category = "RandomIntensity")
		float intensityCycle = 1.0f;
	UPROPERTY(VisibleAnywhere, Category = "RandomIntensity")
		int intensityCycleTime = 0;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		float Minimum_IntensityCycle = 0.3f;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		float Maximum_IntensityCycle = 0.7f;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		float intensity = 10.0f;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		int intensityCount = 0;
	UPROPERTY(EditAnywhere, Category = "RandomIntensity")
		int onIntensityTime = 1.0f;

	float initial_Intensity = 0.0f;
};
