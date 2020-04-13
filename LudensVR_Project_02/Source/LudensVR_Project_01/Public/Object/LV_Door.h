// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_Door.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Door : public AActor
{
	GENERATED_BODY()

		//기본적인 문 프레임
		UPROPERTY(EditAnywhere, Category = "Natalis")
		class UStaticMeshComponent* KnobMesh;

	UPROPERTY(EditAnywhere, Category = "Natalis")
		class UStaticMeshComponent* DoorFrameMesh;	
	
	UPROPERTY(EditAnywhere, Category = "Natalis")
		class UStaticMeshComponent* WallFrame;

	UPROPERTY(EditAnywhere, Category = "Natalis")
		class UStaticMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, Category = "Natalis")
		class UBoxComponent* BoxCollider_Wall;

	/*UPROPERTY(EditAnywhere, Category = "Natalis")
		class UBoxComponent* BoxCollider;
*/
//오버랩시 받아오는 요소
	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class UPrimitiveComponent* Hand;

	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class UPrimitiveComponent* GrapedKnob;

	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class USkeletalMeshComponent* HandMesh;

	//사운드
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* CloseSound;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* OpenSound;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent;

public:
	// Sets default values for this actor's properties
	ALV_Door();

	void Set_WorldLocation(FVector _vector);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//제공 이벤트 함수
	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//사용자 정의 함수
	UFUNCTION()
		void SetDoorDirection();

	UFUNCTION()
		void OpenCloseDoor();

	UFUNCTION()
		void NormalizationDoorLocation();

	UFUNCTION()
		void CalculateDoorSpeed();

	//문의 잠금을 해제
	UFUNCTION()
		void SetUnlockDoor();


	//문의 잠금
	UFUNCTION()
		void SetlockDoor();

	//문이 열리게 해줌
	UFUNCTION()
		void SetCurrentRotation(float rotate_Yaw, float speed);

	//자동 오픈
	UFUNCTION()
		void FollowingCurrentRotation();



	//기획자씨 쪼물딱 거리세요
	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float Max_Yaw = 90.0f;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float Min_Yaw = 0.0f;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float closeSpeed = 0.1f;

	//현재 문 각도
	UPROPERTY(VisibleAnywhere, Category = "DoorRotation")
		float CurrentRotation = 0.0f;

	//현 프레임과 직전 프레임 위치 정보
	FTransform CurrentTransform;
	FTransform PreviousTransform;

	//문 열리고 닫히는 것에 필요한 변수
	FRotator step;
	float stepSpeed = 0.1f;
	FRotator close;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		bool stay = false;

	//사운드 플레이 횟수 카운트 변수
	int closeSoundCount = 0;
	int openSoundCount = 0;

	//속도 벡터 계산에 필요한 변수
	float preX;
	float preY;
	float curX;
	float curY;
	float temp2D;
	float handsqrt;

	FVector2D door;
	FVector2D hands;

	class ATP_MotionController* MotionController;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		bool lock = false;

	float followingSpeed = 0.005f;

	bool isKnob;
};