//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#include "TP_VRGameModeBaseCPP.h"
#include "TP_VirtualRealityPawn_Motion.h"
#include "LV_VirtualRealityCharacter.h"
#include "TP_VirtualRealityPawn_GamePad.h"


ATP_VRGameModeBaseCPP::ATP_VRGameModeBaseCPP()
{
	// DefaultPawnClass
	//DefaultPawnClass = ATP_VirtualRealityPawn_Motion::StaticClass();
	DefaultPawnClass = ALV_VirtualRealityCharacter::StaticClass();
}

