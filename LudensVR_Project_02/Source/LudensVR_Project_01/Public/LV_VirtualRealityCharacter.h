// Copyright (c) 2018 Ludens VR, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LV_Lantern.h"
#include "LV_Holder.h"
#include "LV_Door.h"
#include "LV_PawnMovementComponent.h"
#include "LV_VirtualRealityCharacter.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ALV_VirtualRealityCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* CameraBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* VRCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* VRCameraBase;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UOculusBoundaryComponent* BoundaryComponent; // 구역

public:
	// Sets default values for this character's properties
	ALV_VirtualRealityCharacter();

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

	UFUNCTION()
		FRotator GetRotationFromInput(float UpAxis, float RightAxis, class ATP_MotionController* MotionController);
	
	// Lantern Control
	UFUNCTION()
		void Light_Switch();

	UFUNCTION()
		void WidgetPressed();

	UFUNCTION()
		void WidgetReleased();

	// Movement
	void MoveForward(float value);
	void MoveRight(float value);

	class ULV_PawnMovementComponent* MovementComponent; // 벽 충돌, 슬라이딩
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	//-------------------------
	void MovePosition(FVector _Location, FRotator _Rotator);
	void SetRightInteraction(bool _OnOff);

	bool rightInteraction = true;
	//-------------------------

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

	void WalkingSound();

	int isWalkingCount;

	float playerMovementSpeed;

	FVector currentCameraPos;
};
