// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Lantern.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Components/SpotLightComponent.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "TP_MotionController.h"

// Sets default values
ALV_Lantern::ALV_Lantern()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SM_Lantern(TEXT("StaticMesh'/Game/Natalis/FPS_Light_Pack/Materials/Flashlight/New_Flashlight.New_Flashlight'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MI_Lantern_0(TEXT("Material'/Game/Natalis/FPS_Light_Pack/Materials/Flashlight/M_Flashlight_Glass.M_Flashlight_Glass'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MI_Lantern_1(TEXT("MaterialInstanceConstant'/Game/Natalis/FPS_Light_Pack/Materials/Flashlight/M_Flashlight.M_Flashlight'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> MI_Lantern_2(TEXT("Material'/Game/Natalis/FPS_Light_Pack/Materials/Flashlight/M_Flashlight_Glass_2.M_Flashlight_Glass_2'"));

	LanternMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	//SpotLightAssistant = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightAssistant"));

	Light_Internsity = 1000.0f;
	Light_Color_R = 1.0f;
	Light_Color_G = 1.0f;
	Light_Color_B = 1.0f;
	Light_Length = 700.0f;

	RootComponent = LanternMesh;
	SpotLight->SetupAttachment(LanternMesh);
	//SpotLightAssistant->SetupAttachment(LanternMesh);
	
	LanternMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	LanternMesh->SetCollisionProfileName("PhysicsActor");
	LanternMesh->SetGenerateOverlapEvents(true);
	LanternMesh->SetNotifyRigidBodyCollision(true);
	LanternMesh->CastShadow = false;
	//수정해야할것
	LanternMesh->SetRelativeLocation(FVector(-200.0f, 240.0f, 100.0f));
	LanternMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));
	SpotLight->SetRelativeLocation(FVector(9.0f, 6.0f, -11.0f));
	SpotLight->SetRelativeRotation(FRotator(270.0f, 0.0f, 0.0f));
	//SpotLightAssistant->SetRelativeLocation(FVector(9.0f, 6.0f, -11.0f));
	//SpotLightAssistant->SetRelativeRotation(FRotator(270.0f, 0.0f, 0.0f));


	SpotLight->bVisible = true;
	SpotLight->SetMobility(EComponentMobility::Stationary);
	SpotLight->SetIntensity(Light_Internsity);
	SpotLight->SetLightColor(FLinearColor(Light_Color_R, Light_Color_G, Light_Color_B));
	SpotLight->SetAttenuationRadius(Light_Length);
	SpotLight->SetOuterConeAngle(20.0f);
	SpotLight->SetInnerConeAngle(3.0f);


	//보조 라이트
	//SpotLightAssistant->bVisible = true;
	//SpotLightAssistant->SetMobility(EComponentMobility::Stationary);
	//SpotLightAssistant->SetIntensity(300.0f);
	//SpotLightAssistant->SetLightColor(FLinearColor(Light_Color_R, Light_Color_G, Light_Color_B));
	//SpotLightAssistant->SetAttenuationRadius(1000.0f);
	//SpotLightAssistant->SetOuterConeAngle(10.0f);
	//SpotLightAssistant->SetInnerConeAngle(5.0f);

	if (SM_Lantern.Succeeded())
	{
		LanternMesh->SetStaticMesh(SM_Lantern.Object);
		if (MI_Lantern_0.Succeeded())
		{
			LanternMesh->SetMaterial(0, MI_Lantern_0.Object);
		}
		if (MI_Lantern_1.Succeeded())
		{
			LanternMesh->SetMaterial(1, MI_Lantern_1.Object);
		}
		if (MI_Lantern_2.Succeeded())
		{
			LanternMesh->SetMaterial(2, MI_Lantern_2.Object);
		}
	}

	Tags.Add(FName("Lantern"));
}

// Called when the game starts or when spawned
void ALV_Lantern::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALV_Lantern::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Lantern::Pickup_Implementation(USceneComponent* AttachTo)
{
	LanternMesh->SetSimulatePhysics(false);
	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

// Lantern Turn On/Off
void ALV_Lantern::Light_Switch()
{
	SpotLight->ToggleVisibility();
}