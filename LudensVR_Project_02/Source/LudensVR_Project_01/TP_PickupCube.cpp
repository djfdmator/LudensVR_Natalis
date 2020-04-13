//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_PickupCube.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"


// Sets default values
ATP_PickupCube::ATP_PickupCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Pickup(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInstanceConstant> MI_SmallCubes(TEXT("MaterialInstanceConstant'/Game/VirtualReality/Materials/MI_SmallCubes.MI_SmallCubes'"));

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));

	RootComponent = PickupMesh;
	PickupMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetNotifyRigidBodyCollision(true);
	PickupMesh->SetGenerateOverlapEvents(true);
	PickupMesh->SetCollisionProfileName("PhysicsActor");
	if (SM_Pickup.Succeeded())
	{
		PickupMesh->SetStaticMesh(SM_Pickup.Object);
		if (MI_SmallCubes.Succeeded())
		{
			PickupMesh->SetMaterial(0, MI_SmallCubes.Object);
		}
	}

	//PickupMesh->SetCollisionObjectType(ECC_GameTraceChannel15);
	PickupMesh->SetCollisionProfileName(TEXT("TestBoxPreset"));
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetNotifyRigidBodyCollision(true);
	PickupMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ATP_PickupCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATP_PickupCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//ECollisionChannel e = PickupMesh->GetCollisionObjectType();
	//switch (e)
	//{
	//case ECC_EngineTraceChannel1:
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" ECC_EngineTraceChannel1")));
	//	break;
	//case ECC_GameTraceChannel1:
	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT(" ECC_GameTraceChannel1")));
	//	break;
	//}
}

void ATP_PickupCube::Pickup_Implementation(USceneComponent* AttachTo)
{
	PickupMesh->SetSimulatePhysics(false);

	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

void ATP_PickupCube::Drop_Implementation()
{
	PickupMesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}