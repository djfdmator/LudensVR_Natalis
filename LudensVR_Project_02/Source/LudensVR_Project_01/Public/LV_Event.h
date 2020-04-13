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

	//첫 번째 오브젝트 습득 함수
	void GetFirstObject();

	//두 번째 오브젝트 습득 함수
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

	//이벤트 몸체
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* EventManager;

	UPROPERTY(VisibleAnywhere)
		ALV_Mannequin* manne;

	UPROPERTY(VisibleAnywhere)
		AGM_Logo* Logo;

#pragma region Door
	///문 모음


	//게임 시작시 열리는 문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event0;

	//안방 문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event1;

	//안방에서 화장실 문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event2;

	//화장실에서 복도 문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event3;

	//계단문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event4;

	//아이방 문
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event5;	
	
	UPROPERTY(VisibleAnywhere)
		ALV_Door* Door_Event6;


#pragma endregion

#pragma region Wall
	///벽 집합

	//벽1
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_1_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_1_2;

	//벽2
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_2;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_3;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_2_4;

	//벽3
	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_3_1;

	UPROPERTY(VisibleAnywhere)
		ALV_Wall* Wall_3_2;


#pragma endregion

#pragma region Trigger
	///트리거 모음


	//시작방 문 나갈때 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event_Start;

	//화장실 옆 방 문 열고 들어갈때 작동하는 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event0;

	//화장실 옆 방 안쪽 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event1;

	//화장실 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event2;

	//화장실 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event3;

	//화장실 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event4;

	//화장실 트리거
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EventObject|", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Trigger_Event_End;


#pragma endregion

#pragma region Audio
	///오디오 모음


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

	//오디오 컴포넌트
	UPROPERTY(EditAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent1;

	//오디오 컴포넌트
	UPROPERTY(EditAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent2;

	//오디오 컴포넌트
	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class UAudioComponent* BGM_AudioComponent;


#pragma endregion

#pragma region Lamp
	///램프 모음


	ALV_Lamp* Lamp_1;
	ALV_Lamp* Lamp_2;
	ALV_Lamp* Lamp_3;
	ALV_Lamp* Lamp_4;
	ALV_Lamp* Lamp_5;	
	ALV_Lamp* Lamp_6;

#pragma endregion

	//ATP_VirtualRealityPawn_Motion* Pawn;----------------------
	ALV_VirtualRealityCharacter* Character;

	//이벤트 진행 상태
	UPROPERTY(VisibleAnywhere)
		int eventIndex = -1;

	void Intro();

	//시작방 지나가면 문 자동으로 닫힘
	void DoorClosed();

	//화장실 옆 방 입구 들어갈시
	void Event1();
	bool event_1_start = false;

	//아이 방 트리거 모두 작동시
	void Event2();
	void Event2_2();
	bool event_2_trigger1 = false;
	bool event_2_trigger2 = false;

	//2층 계단 문 열리는 이벤트
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

	//첫 시작 방
	void Event0();


	FTimerHandle MemberTimerHandle;

	//오브젝트 습득 변수
	bool triggerObject_1 = false;

	bool triggerObject_2 = false;

	bool GetObject_1();
	bool GetObject_2();

	void GameStart_IncreaseEventIndex();
};
