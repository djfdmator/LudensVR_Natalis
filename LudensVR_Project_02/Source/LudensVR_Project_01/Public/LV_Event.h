// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LV_Door.h"
#include "LV_Wall.h"
#include "LV_Lamp.h"
#include "LV_Mannequin.h"
#include "GM_Logo.h"
#include "TP_VirtualRealityPawn_Motion.h"//
#include "LV_VirtualRealityCharacter.h"
#include "TP_InteractionInterface.h"
#include "LV_Event.generated.h"

//UENUM(BlueprintType)
//enum class EventStateEnum : uint8
//{
//	Event0 UMETA(DisplayName = "Option A"),
//	TE_OptionB UMETA(DisplayName = "Option B"),
//};


UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Event : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALV_Event();

	//ù ��° ������Ʈ ���� �Լ�
	void GetFirstObject();

	//�� ��° ������Ʈ ���� �Լ�
	void GetSecondObject();


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

	//�̺�Ʈ ��ü
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* EventManager;

	UPROPERTY(VisibleAnywhere)
		ALV_Mannequin* manne;

	UPROPERTY(VisibleAnywhere)
		AGM_Logo* Logo;

#pragma region Door
	///�� ����


	//���� ���۽� ������ ��
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event0;

	//�ȹ� ��
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event1;

	//�ȹ濡�� ȭ��� ��
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event2;

	//ȭ��ǿ��� ���� ��
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event3;

	//��ܹ�
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event4;

	//���̹� ��
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event5;	
	
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event6;


#pragma endregion

#pragma region Wall
	///�� ����

	//��1
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_1_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_1_2;

	//��2
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_2;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_3;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_4;

	//��3
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_3_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_3_2;


#pragma endregion

#pragma region Trigger
	///Ʈ���� ����


	//���۹� �� ������ Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event_Start;

	//ȭ��� �� �� �� ���� ���� �۵��ϴ� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event0;

	//ȭ��� �� �� ���� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event1;

	//ȭ��� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event2;

	//ȭ��� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event3;

	//ȭ��� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event4;

	//ȭ��� Ʈ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event_End;


#pragma endregion

#pragma region Audio
	///����� ����


	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Event_Start_OpenDoor;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Event_Start_CloseDoor;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Child_Laughing;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Lightbulb_Broken;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Open_Door;

	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_BGM_Horror5;	
	
	//
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_BGM_Horror4;

	//����� ������Ʈ
	UPROPERTY(EditAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent1;

	//����� ������Ʈ
	UPROPERTY(EditAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent2;

	//����� ������Ʈ
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class UAudioComponent* BGM_AudioComponent;


#pragma endregion

#pragma region Lamp
	///���� ����


	ALV_Lamp* Lamp_1;
	ALV_Lamp* Lamp_2;
	ALV_Lamp* Lamp_3;
	ALV_Lamp* Lamp_4;
	ALV_Lamp* Lamp_5;	
	ALV_Lamp* Lamp_6;

#pragma endregion

	//ATP_VirtualRealityPawn_Motion* Pawn;----------------------
	ALV_VirtualRealityCharacter* Character;

	//�̺�Ʈ ���� ����
	UPROPERTY(VisibleAnywhere)
		int eventIndex = -1;

	void Intro();

	//���۹� �������� �� �ڵ����� ����
	void DoorClosed();

	//ȭ��� �� �� �Ա� ����
	void Event1();
	bool event_1_start = false;

	//���� �� Ʈ���� ��� �۵���
	void Event2();
	void Event2_2();
	bool event_2_trigger1 = false;
	bool event_2_trigger2 = false;

	//2�� ��� �� ������ �̺�Ʈ
	void Event3();
	void Event3_2();

	void Event4();
	void Event5();
	bool event_3_trigger1 = false;
	bool event_3_trigger2 = false;

	void Event_end();
	bool event_4_trigger1 = false;

	UFUNCTION()
	void MannequinAnimation();

	UFUNCTION()
	void Outro();

public:
	bool isIntro = false;
	bool isOutro = false;

	//ù ���� ��
	void Event0();


	FTimerHandle MemberTimerHandle;

	//������Ʈ ���� ����
	bool triggerObject_1 = false;

	bool triggerObject_2 = false;

	bool GetObject_1();
	bool GetObject_2();

	void GameStart_IncreaseEventIndex();
};
