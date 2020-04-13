//=======================================================================================================================================
// The named class sources like 'TP_...' are the Unreal Engine 4.20 full C++ VR template sources written by Sang-bin, Jeon (Ludens VR)  |
// This VR Template Copyright (C) 2018, Sang-bin, Jeon, All Rights Reserved.															|
// This Project Copyright (C) 2018, Ludens VR, All Rights Reserved.																		|
//=======================================================================================================================================

#pragma once

#include "CoreMinimal.h"
//#include "UObject/Interface.h"
#include "TP_InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTP_InteractionInterface : public UInterface
{
	GENERATED_BODY()
};


class LUDENSVR_PROJECT_01_API ITP_InteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VRTemplate|BPI_Lowlevel|Player")
		void Pickup(class USceneComponent* AttachTo);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "VRTemplate|BPI_Lowlevel|Player")
		void Drop();
};
