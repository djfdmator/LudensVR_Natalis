//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_HandAnimInstance.h"

UTP_HandAnimInstance::UTP_HandAnimInstance()
{
	CurrentGripState = EGrip_Code::Open;
	CurrentGripObject = EGrip_Object::Empty;
	IsLantern = false;
	IsDiary = false;
	IsPen = false;
}

void UTP_HandAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (CurrentGripObject == EGrip_Object::Lantern)
	{
		IsLantern = true;
	}
	else
	{
		IsLantern = false;
	}
	if (CurrentGripObject == EGrip_Object::Diary)
	{
		IsDiary = true;
	}
	else
	{
		IsDiary = false;
	}
	if (CurrentGripObject == EGrip_Object::Pen)
	{
		IsPen = true;
	}
	else
	{
		IsPen = false;
	}
}

void UTP_HandAnimInstance::SetGripState(EGrip_Code GripState)
{
	CurrentGripState = GripState;
}

void UTP_HandAnimInstance::SetGripObject(EGrip_Object GripObject)
{
	CurrentGripObject = GripObject;
}