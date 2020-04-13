// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_Door.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Door : public AActor
{
	GENERATED_BODY()

		//�⺻���� �� ������
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
//�������� �޾ƿ��� ���
	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class UPrimitiveComponent* Hand;

	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class UPrimitiveComponent* GrapedKnob;

	UPROPERTY(VisibleAnywhere, Category = "Natalis")
		class USkeletalMeshComponent* HandMesh;

	//����
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

	//���� �̺�Ʈ �Լ�
	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//����� ���� �Լ�
	UFUNCTION()
		void SetDoorDirection();

	UFUNCTION()
		void OpenCloseDoor();

	UFUNCTION()
		void NormalizationDoorLocation();

	UFUNCTION()
		void CalculateDoorSpeed();

	//���� ����� ����
	UFUNCTION()
		void SetUnlockDoor();


	//���� ���
	UFUNCTION()
		void SetlockDoor();

	//���� ������ ����
	UFUNCTION()
		void SetCurrentRotation(float rotate_Yaw, float speed);

	//�ڵ� ����
	UFUNCTION()
		void FollowingCurrentRotation();



	//��ȹ�ھ� �ɹ��� �Ÿ�����
	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float Max_Yaw = 90.0f;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float Min_Yaw = 0.0f;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		float closeSpeed = 0.1f;

	//���� �� ����
	UPROPERTY(VisibleAnywhere, Category = "DoorRotation")
		float CurrentRotation = 0.0f;

	//�� �����Ӱ� ���� ������ ��ġ ����
	FTransform CurrentTransform;
	FTransform PreviousTransform;

	//�� ������ ������ �Ϳ� �ʿ��� ����
	FRotator step;
	float stepSpeed = 0.1f;
	FRotator close;

	UPROPERTY(EditAnywhere, Category = "DoorRotation")
		bool stay = false;

	//���� �÷��� Ƚ�� ī��Ʈ ����
	int closeSoundCount = 0;
	int openSoundCount = 0;

	//�ӵ� ���� ��꿡 �ʿ��� ����
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