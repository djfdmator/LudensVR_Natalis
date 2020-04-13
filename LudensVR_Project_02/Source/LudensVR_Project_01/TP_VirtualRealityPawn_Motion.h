//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LV_Lantern.h"
#include "LV_Holder.h"
#include "LV_Stair.h"
#include "LV_Door.h"
#include "LV_PawnMovementComponent.h"
#include "TP_VirtualRealityPawn_Motion.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ATP_VirtualRealityPawn_Motion : public APawn
{
	GENERATED_BODY()


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* CameraBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* VRCamera;

	class UCapsuleComponent* CapsuleComponent;

	//Outline Collider
	class UBoxComponent* OutlineCollider;


public:
	// Sets default values for this pawn's properties
	ATP_VirtualRealityPawn_Motion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Resets HMD orientation and position in VR
	void OnResetVR();

	void GrabActor_Left();
	void ReleaseActor_Left();

	void GrabActor_Right();
	void ReleaseActor_Right();

	void TeleportPressed_Left();
	void TeleportReleased_Left();

	void TeleportPressed_Right();
	void TeleportReleased_Right();

	UFUNCTION()
		FRotator GetRotationFromInput(float UpAxis, float RightAxis, class ATP_MotionController* MotionController);

	UFUNCTION()
		void ExecuteTeleportation(class ATP_MotionController* MotionController);

	UFUNCTION()
		void TeleportActor(class ATP_MotionController* MotionController);

public:
	//손전등 조작
	UFUNCTION()
	    void Light_Switch();

	UFUNCTION()
		void WidgetPressed();

	UFUNCTION()
		void WidgetReleased();


	void MoveForward(float value);
	void MoveRight(float value);
	void MoveStair(FVector cameraV);

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* LeftController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class ATP_MotionController* RightController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float FadeOutDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float FadeInDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bIsTeleporting;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		FLinearColor TeleportFadeColor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float ThumbDeadzone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bRightStickDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bLeftStickDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float DefaultPlayerHeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bUseControllerRollToRotate;

	UPROPERTY(VisibleAnywhere)
		ALV_Holder* HolderSpawn;

	FTimerHandle FadeTimerHandle;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class UAudioComponent* AudioComponent;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
		class USoundCue* Sound_Walking;

	UPROPERTY(VisibleAnywhere)
		class ALV_Stair* StairTrigger;

	// Door
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door1_2;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door_1;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door4;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door5;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door6;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door8;
	UPROPERTY(VisibleAnywhere)
		class ALV_Door* Door10;
	
	void WalkingSound();

	int isWalkingCount;

private:
	float playerMovementSpeed;

	bool isPlayerMovable;

	float valueForward;
	
	float valueRight;

	FVector currentCameraPos;
public:
	class USceneComponent* VRCameraBase;

	class ULV_PawnMovementComponent* MovementComponent;//
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	//제작 - 김동하
	void MovePosition(FVector _Location, FRotator _Rotator);
	void SetRightInteraction(bool _OnOff);

	bool rightInteraction = true;
	//--------------------------

protected:
	UFUNCTION()
		void CapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION()
		void CapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
