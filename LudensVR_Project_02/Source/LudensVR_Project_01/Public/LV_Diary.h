// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_InteractionInterface.h"
#include "LV_Diary.generated.h"


UENUM(BlueprintType)
enum class EButtonEnum : uint8
{

	BE_Go UMETA(DisplayName = "Button Go"),
	BE_Quit UMETA(DisplayName = "Button Quit")
};

UENUM(BlueprintType)
enum class EDIARYPAGE : uint8
{
	PAGE_GOTOSTART UMETA(DisplayName = "PAGE_GOTOSTART"), PAGE_QUIT UMETA(DisplayName = "PAGE_QUIT"), PAGE_MENU UMETA(DisplayName = "PAGE_MENU"),
	PAGE_2 UMETA(DisplayName = "PAGE_2"), PAGE_3 UMETA(DisplayName = "PAGE_3"), PAGE_4 UMETA(DisplayName = "PAGE_4"),
	PAGE_5 UMETA(DisplayName = "PAGE_5"), PAGE_6 UMETA(DisplayName = "PAGE_6"), PAGE_7 UMETA(DisplayName = "PAGE_7"), PAGE_8 UMETA(DisplayName = "PAGE_8")
};

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_Diary : public AActor, public ITP_InteractionInterface
{
	GENERATED_BODY()
private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class UWidgetComponent* WidgetLeft;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class UWidgetComponent* WidgetRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class UWidgetComponent* WidgetMenu_G_Q;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent *SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class UAnimSequence *Anim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Diary", meta = (AllowPrivateAccess = "true"))
		class UAnimSequence *AnimReverse;




	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_G;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_Q;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_YES;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_NO;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_Before;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WidgetBox", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* BoxCollider_Next;



	UPROPERTY()
		bool IsWidget;

	UPROPERTY()
		bool OnOverlapButton;
	UPROPERTY()
		bool OnOvertimeButton;
	UPROPERTY()
		int PageNumber;


	UPROPERTY()
		EDIARYPAGE DiaryPage;

	UPROPERTY(EditAnywhere)
		EButtonEnum ButtonEnum;

	UFUNCTION()
		void CollisionMenuEnabled(bool IsMenu);
	UFUNCTION()
		void SaveGame();
	UFUNCTION()
		void LoadGame();


public:
	// Sets default values for this actor's properties
	ALV_Diary();

	void SetDiaryPage(EDIARYPAGE value);
	EDIARYPAGE GetDiaryPage();


	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	static  ALV_Diary *  GetInstance();

	class ALV_Event* _event;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);
	UFUNCTION()
		virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryMenuWidget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage2Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage3Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage4Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage5Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage6Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage7Widget;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class ULV_DiaryWidget* m_DiaryPage8Widget;




	TSubclassOf<class UUserWidget> DiaryMenuWidget_Class;
	TSubclassOf<class UUserWidget> WidgetMenu_Button_G_Class;
	TSubclassOf<class UUserWidget> WidgetMenu_Button_Q_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page2_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page3_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page4_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page5_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page6_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page7_Class;
	TSubclassOf<class UUserWidget> DiaryWidget_Page8_Class;

	FTimerHandle MemberTimerHandle;
	int32 ButtonDelayCount = 3;

	UFUNCTION()
	void OnExplode();

	void calcOpacity(EDIARYPAGE _page);



};
