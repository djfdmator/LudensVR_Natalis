// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_InteractionInterface.h"
#include "LV_Stair.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Stair : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALV_Stair();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//시작방 문 나갈때 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Stair;

	UPROPERTY()
		bool isStair;

public:
	UFUNCTION()
		void SetisStair(bool _isStair);

	UFUNCTION()
		bool GetisStair();
	
};
