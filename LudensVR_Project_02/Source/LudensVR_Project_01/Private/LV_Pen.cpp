// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Pen.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "Components/BoxComponent.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "DrawDebugHelpers.h"


#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,text)
#define printf(text,fstring) if(GEngine) GEngine->AddOnScreenDebugMessage(-1,3.5,FColor::Red,FString::Printf(TEXT(text),fstring))



// Sets default values
ALV_Pen::ALV_Pen()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SM_Pen(TEXT("StaticMesh'/Game/Natalis/Pen/Mesh/NewPen.NewPen'"));




	PenMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	BoxCollider_Pen = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));


	RootComponent = PenMesh;
	BoxCollider_Pen->SetupAttachment(PenMesh);


	BoxCollider_Pen->SetRelativeLocation(FVector(0.0f, 0.0f, -1.8f));
	BoxCollider_Pen->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	BoxCollider_Pen->SetRelativeScale3D(FVector(0.005f, 0.005f, 0.005f));
	//BoxCollider_Pen->SetCollisionProfileName(TEXT("OverlapAll"));
	BoxCollider_Pen->SetCollisionProfileName("PhysicsActor");
	//BoxCollider_Pen->SetGenerateOverlapEvents(true);
	BoxCollider_Pen->SetNotifyRigidBodyCollision(true);
	BoxCollider_Pen->ComponentTags.Add(FName("PenBox"));


	PenMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	PenMesh->SetRelativeLocation(FVector(0.0f, -378.0f, 200.0f));
	PenMesh->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
	PenMesh->SetSimulatePhysics(true);
	PenMesh->SetCollisionProfileName("PhysicsActor");
	PenMesh->SetNotifyRigidBodyCollision(true);
	PenMesh->SetGenerateOverlapEvents(true);
	PenMesh->ComponentTags.Add(FName("Pen"));
	


	if (SM_Pen.Succeeded())
	{
		PenMesh->SetStaticMesh(SM_Pen.Object);
	}

	Tags.Add(FName("Pen"));
}

// Called when the game starts or when spawned
void ALV_Pen::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_Pen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Pen::Pickup_Implementation(USceneComponent* AttachTo)
{
	PenMesh->SetSimulatePhysics(false);
	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}



