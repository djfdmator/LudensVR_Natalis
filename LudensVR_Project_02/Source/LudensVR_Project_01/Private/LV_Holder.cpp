// Copyright (c) 2018 Ludens VR, All Rights Reserved.
#include "LV_Holder.h"
#include "Components/StaticMeshComponent.h"
#include "TP_MotionController.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "UObject/ConstructorHelpers.h"
//#include "Runtime/Engine/Classes/Engine/Engine.h"

// Sets default values
ALV_Holder::ALV_Holder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Cube(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	HolderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HolderMesh"));
	RootComponent = HolderMesh;

	HolderMesh->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	if (SM_Cube.Succeeded())
	{
		HolderMesh->SetStaticMesh(SM_Cube.Object);
	}

	HolderMesh->bVisible = false;
	HolderMesh->SetGenerateOverlapEvents(true);
	HolderMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	HolderMesh->OnComponentBeginOverlap.AddUniqueDynamic(this, &ALV_Holder::HolderBeginOverlap);
	HolderMesh->OnComponentEndOverlap.AddUniqueDynamic(this, &ALV_Holder::HolderEndOverlap);

	RightController = nullptr;
	LeftController = nullptr;
}

// Called when the game starts or when spawned
void ALV_Holder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALV_Holder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Holder::HolderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor == RightController)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Red, FString::Printf(TEXT("Right hand overlapped")));
		RightController->InHolder = true;
		RightController->currentHolder = this;
		RightController->currentHand = true;
	}
	else if (OtherActor == LeftController)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Red, FString::Printf(TEXT("Left hand overlapped")));
		LeftController->InHolder = true;
		LeftController->currentHolder = this;
		LeftController->currentHand = false;
	}
}

void ALV_Holder::HolderEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor == RightController)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Red, FString::Printf(TEXT("Right hand don't overlapped")));
		RightController->InHolder = false;
		RightController->currentHolder = nullptr;
	}
	else if (OtherActor == LeftController)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 6.0f, FColor::Red, FString::Printf(TEXT("Left hand don't overlapped")));
		LeftController->InHolder = false;
		LeftController->currentHolder = nullptr;
	}
}

void ALV_Holder::SetController(class ATP_MotionController* Right_Controller, class ATP_MotionController* Left_Controller)
{
	RightController = Right_Controller;
	LeftController = Left_Controller;
}

void ALV_Holder::SetHolderTag(FName tag)
{
	Tags.Add(tag);
}