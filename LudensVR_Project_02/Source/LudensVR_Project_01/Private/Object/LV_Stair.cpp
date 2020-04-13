// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Stair.h"
#include "Components/BoxComponent.h"

// Sets default values
ALV_Stair::ALV_Stair()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Trigger_Stair = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Stair"));
	//Trigger_Stair->SetCollisionProfileName(TEXT("OverlapAll"));
	Trigger_Stair->ComponentTags.Add(FName("Trigger_Stair"));
	Trigger_Stair->SetNotifyRigidBodyCollision(true);
	Trigger_Stair->SetGenerateOverlapEvents(true);
	Trigger_Stair->SetSimulatePhysics(false);
	//Trigger_Stair->SetWorldLocation(FVector(-370.0f, -680.0f, 570.0f));
	Trigger_Stair->SetRelativeScale3D(FVector(10.0f, 3.0f, 10.0f));
	Trigger_Stair->bApplyImpulseOnDamage = false;
	Trigger_Stair->OnComponentBeginOverlap.AddDynamic(this, &ALV_Stair::OnComponentBeginOverlap);
	Trigger_Stair->OnComponentEndOverlap.AddDynamic(this, &ALV_Stair::OnOverlapEnd);

	SetisStair(false);
}

// Called when the game starts or when spawned
void ALV_Stair::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALV_Stair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALV_Stair::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp->ComponentTags.Contains("Trigger_Stair") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		SetisStair(true);
		//isStair = true;
	}
}

void ALV_Stair::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OverlappedComp->ComponentTags.Contains("Trigger_Stair") && OtherComp->ComponentTags.Contains("CapsuleComponent"))
	{
		SetisStair(false);
		//isStair = false;
	}
}

void ALV_Stair::SetisStair(bool _isStair)
{
	this->isStair = _isStair;
}

bool ALV_Stair::GetisStair()
{
	return this->isStair;
}