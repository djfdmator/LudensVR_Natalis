// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_NewsPaper.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EngineUtils.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ALV_NewsPaper::ALV_NewsPaper()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Pickup(TEXT("StaticMesh'/Game/Natalis/Diary/Diary_Object/SM_Diary_Object_01_1.SM_Diary_Object_01_1'"));
	//static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MI_SmallCubes(TEXT("MaterialInstanceConstant'/Game/VirtualReality/Materials/MI_SmallCubes.MI_SmallCubes'"));

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));

	RootComponent = PickupMesh;
	PickupMesh->SetRelativeScale3D(FVector(30.0f, 30.0f, 30.0f));
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetNotifyRigidBodyCollision(true);
	PickupMesh->SetGenerateOverlapEvents(true);
	PickupMesh->ComponentTags.Add(FName("IsCanGrab"));
	PickupMesh->SetCollisionProfileName("PhysicsActor");
	if (SM_Pickup.Succeeded())
	{
		PickupMesh->SetStaticMesh(SM_Pickup.Object);
		//if (MI_SmallCubes.Succeeded())
		//{
		//	PickupMesh->SetMaterial(0, MI_SmallCubes.Object);
		//}
	}

	//PickupMesh->SetCollisionObjectType(ECC_GameTraceChannel15);
	PickupMesh->SetCollisionProfileName(TEXT("TestBoxPreset"));
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetNotifyRigidBodyCollision(true);
	PickupMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ALV_NewsPaper::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ALV_Event> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
			Event = *ActorItr;
	}
}

// Called every frame
void ALV_NewsPaper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_NewsPaper::Pickup_Implementation(USceneComponent* AttachTo)
{
	PickupMesh->SetSimulatePhysics(false);

	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);

	//차후 수정 필요
	if (!GetName().Compare("LV_NewsPaper_2")) { Event->GetFirstObject(); }
	else if (!GetName().Compare("LV_NewsPaper_1")) { Event->GetSecondObject(); }

}

void ALV_NewsPaper::Drop_Implementation()
{
	PickupMesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);

	Destroy();
}

