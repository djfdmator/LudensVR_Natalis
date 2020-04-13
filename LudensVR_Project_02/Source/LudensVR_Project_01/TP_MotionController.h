//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_VRDataTable.h"
#include "TP_MotionController.generated.h"

UCLASS()
class LUDENSVR_PROJECT_01_API ATP_MotionController : public AActor

{
	GENERATED_BODY()
	
		// Components Initialization
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* RootScene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UMotionControllerComponent* MotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* HandMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UArrowComponent* ArcDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USplineComponent* ArcSpline;

	UPROPERTY(VisibleAnywhere, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USphereComponent* GrabShpere;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* ArcEndPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* TeleportCylinder;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Ring;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* Arrow;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* RoomScaleMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Components", meta = (AllowPrivateAccess = "true"))
		class USteamVRChaperoneComponent* SteamVRChaperone;

public:	
	// Sets default values for this actor's properties
	ATP_MotionController();

	virtual void OnConstruction(const FTransform & Transform) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		AActor* GetActorNearHand() const;

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void GrabActorRight();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void GrabActorLeft();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void GrabPen();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void DestroyActor();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void DestroyPen();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Grabbing")
		void ReleaseActor();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void ActivateTeleporter();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void DisableTeleporter();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		bool TraceTeleportDestination(TArray<FVector>& TracePoints, FVector& NavMeshLocation, FVector& TraceLocation);

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void ClearArc();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void UpdateArcSpline(bool FoundValidLocation, TArray<FVector> SplinePoints);

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void UpdateArcEndPoint(bool ValidLocationFound, FVector NewLocation);

	UFUNCTION(BlueprintPure, Category = "VRTemplate|Teleportation")
		void GetTeleportDestination(FVector& MyLocation, FRotator& MyRotation);

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|RoomScale")
		void SetupRoomScaleOutline();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|RoomScale")
		void UpdateRoomScaleOutline();

	UFUNCTION(BlueprintCallable, Category = "VRTemplate")
		void RumbleController(float Intensity);

	UFUNCTION()
		void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "VRTemplate")
		void UpdateHandAnimation();

	void SetTeleportRotation(FRotator& NewTeleportRotation);

private:
	// Variables Initialization //

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		EGrip_Code CurrentGripState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		EGrip_Object CurrentGripObject;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
	//AActor* AttachedActor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bIsTeleporterActive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		TArray<class USplineMeshComponent*> SplineMeshes;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bLastFrameValidDestination;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bIsRoomScale;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		FVector TeleportDestination;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bIsValidTeleportDestination;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		bool bWantsToGrip;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		FRotator TeleportRotation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		float TeleportLaunchVelocity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		FRotator InitialControllerRotation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class UHapticFeedbackEffect_Base* VRHapticEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class UStaticMesh* BeamMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class UMaterial* BeamMaterial;

protected:

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VRTemplate|Variables")
		EControllerHand Hand;

	FORCEINLINE class UMotionControllerComponent* GetMotionController() const { return MotionController; }
	FORCEINLINE FRotator GetInitialControllerRotation() const { return InitialControllerRotation; }
	FORCEINLINE bool GetIsValidTeleportDestination() const { return bIsValidTeleportDestination; }
	FORCEINLINE bool GetIsTeleporterActive() const { return bIsTeleporterActive; }


	//-------------------------
public:
	UFUNCTION(Category = "VRTemplate") // KDH
		bool GetWantsToGrip();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		AActor* AttachedActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		class UWidgetInteractionComponent* Interaction;	

	UFUNCTION()
		void Interaction_PressPointer();
	UFUNCTION()
		void Interaction_ReleasedPointer();
	UFUNCTION()
		void TurnOffInteraction(bool _onOff);
	

	bool InHolder;

	class ALV_Holder* currentHolder;

	class ALV_Lantern* grabedLantern;
	class ALV_Diary* grabedDiary;
	class ALV_Pen* grabedPen;

	bool nowGrabLantern;
	bool nowGrabDiary;
	bool nowGrabPen;

	bool currentHand; // true is right, false is left;

	bool nowOnInteraction;  //잡고 있는 중인지
};
