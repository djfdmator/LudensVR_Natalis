// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#include "LV_Mannequin.h"
#include "UObject/ConstructorHelpers.h"
#include "Animation/AnimSequence.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"


// Sets default values
ALV_Mannequin::ALV_Mannequin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> FemaleSkeletal(TEXT("SkeletalMesh'/Game/Mannequin/Mannequins/Female/Mesh/SK_AVG_Female.SK_AVG_Female'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> childSkeletal(TEXT("SkeletalMesh'/Game/Mannequin/Mannequins/Child/Mesh/SK_AVG_Child.SK_AVG_Child'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> Female_Anim(TEXT("AnimSequence'/Game/Mannequin/Mannequins/Female/Animations/Squatting_female_mq.Squatting_female_mq'"));
	static ConstructorHelpers::FObjectFinder<UAnimSequence> Child_Anim(TEXT("AnimSequence'/Game/Mannequin/Mannequins/Child/Animations/Squatting_child_mq.Squatting_child_mq'"));


	SceneCompo = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	SceneCompo->SetRelativeLocation(FVector(1215.0f, -590.0f, 350.f));
	SceneCompo->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.f));
	SceneCompo->SetMobility(EComponentMobility::Movable);
	RootComponent = SceneCompo;

	Female = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Female"));
	Female->SetRelativeLocation(FVector(-70.0f, 0.0f, -1.0f));
	Female->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.f));
	Female->SetGenerateOverlapEvents(false);
	Female->SetSimulatePhysics(false);
	//Female->SetMobility(EComponentMobility::Movable);
	
	Female->SetupAttachment(SceneCompo);

	child = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Child"));
	child->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	child->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.f));
	child->SetGenerateOverlapEvents(false);
	child->SetSimulatePhysics(false);
	//child->SetMobility(EComponentMobility::Movable);
	child->SetupAttachment(SceneCompo);


	
	
	if (FemaleSkeletal.Succeeded())
	{
		Female->SetSkeletalMesh(FemaleSkeletal.Object);
	}
	if (childSkeletal.Succeeded())
	{
		child->SetSkeletalMesh(childSkeletal.Object);
	}	
	if (Female_Anim.Succeeded())
	{
		_Female_Anim = Female_Anim.Object;
	}
	if (Child_Anim.Succeeded())
	{
		_child_Anim = Child_Anim.Object;
	}

}

void ALV_Mannequin::FemaleSetVisible(bool _visible)
{
	Female->bHiddenInGame = _visible;
}
void ALV_Mannequin::ChildSetVisible(bool _visible)
{
	child->bHiddenInGame = _visible;
}

void ALV_Mannequin::FemaleAnimPlay(bool _Loop)
{
	Female->PlayAnimation(_Female_Anim, _Loop);
}
void ALV_Mannequin::ChildAnimPlay(bool _Loop)
{
	child->PlayAnimation(_child_Anim, _Loop);
}

// Called when the game starts or when spawned
void ALV_Mannequin::BeginPlay()
{
	Super::BeginPlay();

	Female->PlayAnimation(_Female_Anim, false);
	child->PlayAnimation(_child_Anim, false);
}


void ALV_Mannequin::Set_WorldLocation(float vector_Z)
{
	SceneCompo->SetRelativeLocation(FVector(315.5f, -660.9f, 550.1f));
	//SceneCompo->SetWorldLocation(FVector(1215.0f, -590.0f, vector_Z));
	//Female->SetWorldLocation(FVector(-70.0f, 0.0f, Femalevector_Z));
	//child->SetWorldLocation(FVector(0.0f, 0.0f, childvector_Z));
}
