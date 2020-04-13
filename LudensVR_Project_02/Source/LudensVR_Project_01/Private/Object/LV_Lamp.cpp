// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "Object/LV_Lamp.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Classes/Materials/MaterialInstanceDynamic.h"
#include "Engine/Scene.h"

// Sets default values
ALV_Lamp::ALV_Lamp()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LampOffMaterial(TEXT("MaterialInstanceConstant'/Game/Victorian_House/Materials/Instance/Tiling/Inst_Plastic_Glossy_02.Inst_Plastic_Glossy_02'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> LampOnMaterial(TEXT("MaterialInstanceConstant'/Game/Victorian_House/Materials/Instance/Tiling/Inst_Plastic_Glossy_04.Inst_Plastic_Glossy_04'"));

	if (LampOffMaterial.Succeeded())
	{
		OffMaterial = (UMaterial*)LampOffMaterial.Object;
	}

	if (LampOnMaterial.Succeeded())
	{
		OnMaterial = (UMaterial*)LampOnMaterial.Object;
	}

	LampMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lamp"));
	LampMesh->SetMobility(EComponentMobility::Static);
	LampMesh->SetMaterial(1, OnMaterial);
	RootComponent = LampMesh;

	PointLightMesh = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	PointLightMesh->SetupAttachment(LampMesh);
	PointLightMesh->bVisible = true;
	PointLightMesh->IntensityUnits = ELightUnits::Lumens;
	PointLightMesh->SetMobility(EComponentMobility::Stationary);
}

// Called when the game starts or when spawned
void ALV_Lamp::BeginPlay()
{
	Super::BeginPlay();
	initial_Intensity = PointLightMesh->Intensity;
}

// Called every frame
void ALV_Lamp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (blinkOn == true) {
		if (OnOff == true)
		{
			OnTimeCount++;

			if (OnTime * 60 <= OnTimeCount)
			{
				PointLightMesh->ToggleVisibility();
				LampMesh->SetMaterial(1, OffMaterial);
				OnOff = false;
				OnTimeCount = 0;
				RadomOnTime();
			}
		}
		else
		{
			OffTimeCount++;

			if (OffTime * 60 <= OffTimeCount)
			{
				PointLightMesh->ToggleVisibility();
				LampMesh->SetMaterial(1, OnMaterial);
				OnOff = true;
				OffTimeCount = 0;
				RandomOffTime();
			}
		}

		blinkOnTimeCount++;
		if (blinkOnTime * 60 <= blinkOnTimeCount)
		{
			blinkOn = false;
			blinkOnTimeCount = 0;
			if (OnOff == false)
			{
				PointLightMesh->ToggleVisibility();
				LampMesh->SetMaterial(1, OnMaterial);
				OnOff = true;
			}
		}
	}

	if (intensityBlinkOn == true)
	{
		intensityCycleTime++;
		if (intensityCycleTime >= intensityCycle * 60)
		{
			PointLightMesh->SetIntensity(intensity);
			RandomIntensity();
			RandomIntensityCycle();
			intensityCycleTime = 0;
		}

		intensityCount++;
		if (intensityCount >= onIntensityTime * 60)
		{
			intensityBlinkOn = false;
			intensityCount = 0;
			PointLightMesh->SetIntensity(initial_Intensity);
		}
	}
}

void ALV_Lamp::RandomIntensityCycle()
{
	intensityCycle = FMath::RandRange(Minimum_IntensityCycle, Maximum_IntensityCycle);
}

void ALV_Lamp::RandomIntensity()
{
	intensity = FMath::RandRange(Minimum_Intensity, Maximum_Intensity);
}


void ALV_Lamp::RandomOffTime()
{
	OnTime = FMath::RandRange(Minimum_LightOffTime, Maximum_LightOffTime);
}

void ALV_Lamp::RadomOnTime()
{
	OffTime = FMath::RandRange(Minimum_LightOnTime, Maximum_LightOnTime);
}

void ALV_Lamp::OnBlink(float _onTime, ALV_Lamp::BlinkType _blinkType)
{
	switch (_blinkType)
	{
	case ALV_Lamp::BlinkType::All:
		blinkOn = true;
		intensityBlinkOn = true;
		blinkOnTime = _onTime;
		onIntensityTime = _onTime;
		break;
	case ALV_Lamp::BlinkType::Intensity:
		intensityBlinkOn = true;
		onIntensityTime = _onTime;
		break;
	case ALV_Lamp::BlinkType::Blink:
		blinkOn = true;
		blinkOnTime = _onTime;
		break;
	default:
		break;
	}

}

void ALV_Lamp::TurnOnOff(bool _isOn)
{
	if (OnOff != _isOn)
	{
		PointLightMesh->ToggleVisibility();
		OnOff = _isOn;

		if (OnOff == true)
			LampMesh->SetMaterial(1, OnMaterial);
		else
			LampMesh->SetMaterial(1, OffMaterial);
	}
}