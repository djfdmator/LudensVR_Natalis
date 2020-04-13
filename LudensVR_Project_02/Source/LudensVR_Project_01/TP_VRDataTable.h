//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class EGrip_Code : uint8
{
	Open,
	CanGrab,
	Grab,
};

UENUM(BlueprintType)
enum class EGrip_Object : uint8
{
	Empty,
	Lantern,
	Diary,
	Pen,
};

///**
// * 
// */
//class LUDENSVR_PROJECT_01_API TP_VRDataTable
//{
//public:
//	TP_VRDataTable();
//	~TP_VRDataTable();
//};