// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_Mannequin.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Mannequin : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Natalis")
	class USkeletalMeshComponent* Female;	
	
	UPROPERTY(EditAnywhere, Category = "Natalis")
	class USkeletalMeshComponent* child;	
	
	UPROPERTY(EditAnywhere, Category = "Natalis")
	class UAnimSequence* _Female_Anim;

	UPROPERTY(EditAnywhere, Category = "Natalis")
	class UAnimSequence* _child_Anim;

	UPROPERTY(EditAnywhere, Category = "Natalis")
		class USceneComponent* SceneCompo;

public:	
	// Sets default values for this actor's properties
	ALV_Mannequin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	void FemaleAnimPlay(bool _Loop);
	void ChildAnimPlay(bool _Loop);

	void FemaleSetVisible(bool _visible);
	void ChildSetVisible(bool _visible);

	void Set_WorldLocation(float vector_Z);
	
};
