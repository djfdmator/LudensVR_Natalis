//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

using UnrealBuildTool;
using System.Collections.Generic;

public class LudensVR_Project_01EditorTarget : TargetRules
{
	public LudensVR_Project_01EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

        ExtraModuleNames.AddRange(new string[] { "LudensVR_Project_01", "OculusHMD" });
	}
}
