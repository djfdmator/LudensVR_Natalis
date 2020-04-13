// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_Wall.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Wall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALV_Wall();

	void Set_WorldLocation(FVector _vector);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//º®1
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Wall;

	//º®1_Panel
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Wall_Panel;

	//º®1_Over_Panel
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Wall_Over_Panel;


};
