//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TP_VRDataTable.h"
#include "TP_HandAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class LUDENSVR_PROJECT_01_API UTP_HandAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	UTP_HandAnimInstance();

	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

public:

	UFUNCTION(BlueprintCallable, Category = "VRTemplate|Teleportation")
		void SetGripState(EGrip_Code GripState);

	UFUNCTION(BlueprintCallable)
		void SetGripObject(EGrip_Object GripObject);

private:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VRTemplate|Variables", meta = (AllowPrivateAccess = "true"))
		EGrip_Code CurrentGripState;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		EGrip_Object CurrentGripObject;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		bool IsLantern;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		bool IsDiary;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		bool IsPen;
};
