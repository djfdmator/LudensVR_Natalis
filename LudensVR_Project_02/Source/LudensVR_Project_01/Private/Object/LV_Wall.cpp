// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Wall.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ALV_Wall::ALV_Wall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Wall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Event_Wall"));
	Wall->SetMobility(EComponentMobility::Movable);
	Wall->SetGenerateOverlapEvents(true);
	Wall->SetCollisionProfileName(TEXT("OverlapAll"));
	Wall->ComponentTags.Add(FName("Event_Wall"));
	Wall->ComponentTags.Add(FName("Wall"));
	Wall->SetWorldLocation(FVector(-800.0f, 240.0f, 548.0f));
	RootComponent = Wall;

	Wall_Panel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Event_Wall_Panel"));
	Wall_Panel->SetMobility(EComponentMobility::Movable);
	Wall_Panel->SetRelativeLocation(FVector(0.0f, -200.0f, 0.0f));
	Wall_Panel->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	Wall_Panel->SetRelativeScale3D(FVector(1.55f, 1.0f, 1.0f));

	Wall_Over_Panel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Event_Wall_OverPanel"));
	Wall_Over_Panel->SetMobility(EComponentMobility::Movable);
	Wall_Over_Panel->SetRelativeLocation(FVector(0.0f, -200.0f, 372.5f));
	Wall_Over_Panel->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	Wall_Over_Panel->SetRelativeScale3D(FVector(1.55f, 1.0f, 1.0f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Wall_Mesh(TEXT("StaticMesh'/Game/Victorian_House/Meshes/ModularElements/Mesh_Wall_01.Mesh_Wall_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Wall_Panel_Mesh(TEXT("StaticMesh'/Game/Victorian_House/Meshes/DecorativeElements/Mesh_Wall_Panel_01.Mesh_Wall_Panel_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Wall_OverPanel_Mesh(TEXT("StaticMesh'/Game/Victorian_House/Meshes/DecorativeElements/Mesh_Wall_Panel_03.Mesh_Wall_Panel_03'"));

	if (Wall_Mesh.Succeeded())
	{
		Wall->SetStaticMesh(Wall_Mesh.Object);
	}
	if (Wall_Panel_Mesh.Succeeded())
	{
		Wall_Panel->SetStaticMesh(Wall_Panel_Mesh.Object);
	}
	if (Wall_OverPanel_Mesh.Succeeded())
	{
		Wall_Over_Panel->SetStaticMesh(Wall_OverPanel_Mesh.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> Wallpaper_Material(TEXT("MaterialInstanceConstant'/Game/Victorian_House/Materials/Instance/Tiling/Inst_Wallpaper_01.Inst_Wallpaper_01'"));

	if (Wallpaper_Material.Succeeded())
	{
		Wall->SetMaterial(0, Wallpaper_Material.Object);
	}
}

// Called when the game starts or when spawned
void ALV_Wall::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALV_Wall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Wall::Set_WorldLocation(FVector _vector)
{
	Wall->SetWorldLocation(_vector);
}
