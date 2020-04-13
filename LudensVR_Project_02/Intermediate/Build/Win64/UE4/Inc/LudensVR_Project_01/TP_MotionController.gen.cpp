// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_MotionController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_MotionController() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_MotionController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_ClearArc();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_DestroyActor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_DestroyPen();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_DisableTeleporter();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GetActorNearHand();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GrabActorLeft();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GrabActorRight();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_GrabPen();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_ReleaseActor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_RumbleController();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EGrip_Object();
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATP_MotionController::StaticRegisterNativesATP_MotionController()
	{
		UClass* Class = ATP_MotionController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTeleporter", &ATP_MotionController::execActivateTeleporter },
			{ "ClearArc", &ATP_MotionController::execClearArc },
			{ "DestroyActor", &ATP_MotionController::execDestroyActor },
			{ "DestroyPen", &ATP_MotionController::execDestroyPen },
			{ "DisableTeleporter", &ATP_MotionController::execDisableTeleporter },
			{ "GetActorNearHand", &ATP_MotionController::execGetActorNearHand },
			{ "GetTeleportDestination", &ATP_MotionController::execGetTeleportDestination },
			{ "GetWantsToGrip", &ATP_MotionController::execGetWantsToGrip },
			{ "GrabActorLeft", &ATP_MotionController::execGrabActorLeft },
			{ "GrabActorRight", &ATP_MotionController::execGrabActorRight },
			{ "GrabPen", &ATP_MotionController::execGrabPen },
			{ "Interaction_PressPointer", &ATP_MotionController::execInteraction_PressPointer },
			{ "Interaction_ReleasedPointer", &ATP_MotionController::execInteraction_ReleasedPointer },
			{ "OnComponentBeginOverlap", &ATP_MotionController::execOnComponentBeginOverlap },
			{ "ReleaseActor", &ATP_MotionController::execReleaseActor },
			{ "RumbleController", &ATP_MotionController::execRumbleController },
			{ "SetupRoomScaleOutline", &ATP_MotionController::execSetupRoomScaleOutline },
			{ "TraceTeleportDestination", &ATP_MotionController::execTraceTeleportDestination },
			{ "TurnOffInteraction", &ATP_MotionController::execTurnOffInteraction },
			{ "UpdateArcEndPoint", &ATP_MotionController::execUpdateArcEndPoint },
			{ "UpdateArcSpline", &ATP_MotionController::execUpdateArcSpline },
			{ "UpdateHandAnimation", &ATP_MotionController::execUpdateHandAnimation },
			{ "UpdateRoomScaleOutline", &ATP_MotionController::execUpdateRoomScaleOutline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "ActivateTeleporter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "ClearArc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ClearArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ClearArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "DestroyActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "DestroyPen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_DestroyPen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_DestroyPen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "DisableTeleporter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_DisableTeleporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_DisableTeleporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics
	{
		struct TP_MotionController_eventGetActorNearHand_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventGetActorNearHand_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GetActorNearHand", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(TP_MotionController_eventGetActorNearHand_Parms), Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GetActorNearHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GetActorNearHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics
	{
		struct TP_MotionController_eventGetTeleportDestination_Parms
		{
			FVector MyLocation;
			FRotator MyRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "MyRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventGetTeleportDestination_Parms, MyRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MyLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventGetTeleportDestination_Parms, MyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::NewProp_MyLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GetTeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(TP_MotionController_eventGetTeleportDestination_Parms), Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics
	{
		struct TP_MotionController_eventGetWantsToGrip_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TP_MotionController_eventGetWantsToGrip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventGetWantsToGrip_Parms), &Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "KDH" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GetWantsToGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_MotionController_eventGetWantsToGrip_Parms), Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GrabActorLeft", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GrabActorLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GrabActorLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GrabActorRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GrabActorRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GrabActorRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "GrabPen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_GrabPen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_GrabPen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "Interaction_PressPointer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "Interaction_ReleasedPointer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics
	{
		struct TP_MotionController_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_MotionController_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "OnComponentBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(TP_MotionController_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Grabbing" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "ReleaseActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_ReleaseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_ReleaseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics
	{
		struct TP_MotionController_eventRumbleController_Parms
		{
			float Intensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventRumbleController_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "RumbleController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TP_MotionController_eventRumbleController_Parms), Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_RumbleController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_RumbleController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|RoomScale" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "SetupRoomScaleOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics
	{
		struct TP_MotionController_eventTraceTeleportDestination_Parms
		{
			TArray<FVector> TracePoints;
			FVector NavMeshLocation;
			FVector TraceLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavMeshLocation;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TracePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TracePoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TP_MotionController_eventTraceTeleportDestination_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventTraceTeleportDestination_Parms), &Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TraceLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventTraceTeleportDestination_Parms, TraceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_NavMeshLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NavMeshLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventTraceTeleportDestination_Parms, NavMeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TracePoints = { UE4CodeGen_Private::EPropertyClass::Array, "TracePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventTraceTeleportDestination_Parms, TracePoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TracePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TracePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TraceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_NavMeshLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TracePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::NewProp_TracePoints_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "TraceTeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(TP_MotionController_eventTraceTeleportDestination_Parms), Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics
	{
		struct TP_MotionController_eventTurnOffInteraction_Parms
		{
			bool _onOff;
		};
		static void NewProp__onOff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__onOff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::NewProp__onOff_SetBit(void* Obj)
	{
		((TP_MotionController_eventTurnOffInteraction_Parms*)Obj)->_onOff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::NewProp__onOff = { UE4CodeGen_Private::EPropertyClass::Bool, "_onOff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventTurnOffInteraction_Parms), &Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::NewProp__onOff_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::NewProp__onOff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "TurnOffInteraction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_MotionController_eventTurnOffInteraction_Parms), Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics
	{
		struct TP_MotionController_eventUpdateArcEndPoint_Parms
		{
			bool ValidLocationFound;
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_ValidLocationFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidLocationFound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventUpdateArcEndPoint_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound_SetBit(void* Obj)
	{
		((TP_MotionController_eventUpdateArcEndPoint_Parms*)Obj)->ValidLocationFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound = { UE4CodeGen_Private::EPropertyClass::Bool, "ValidLocationFound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventUpdateArcEndPoint_Parms), &Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_NewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::NewProp_ValidLocationFound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "UpdateArcEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TP_MotionController_eventUpdateArcEndPoint_Parms), Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics
	{
		struct TP_MotionController_eventUpdateArcSpline_Parms
		{
			bool FoundValidLocation;
			TArray<FVector> SplinePoints;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplinePoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplinePoints_Inner;
		static void NewProp_FoundValidLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FoundValidLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints = { UE4CodeGen_Private::EPropertyClass::Array, "SplinePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_MotionController_eventUpdateArcSpline_Parms, SplinePoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SplinePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation_SetBit(void* Obj)
	{
		((TP_MotionController_eventUpdateArcSpline_Parms*)Obj)->FoundValidLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "FoundValidLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_MotionController_eventUpdateArcSpline_Parms), &Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_SplinePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::NewProp_FoundValidLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "UpdateArcSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TP_MotionController_eventUpdateArcSpline_Parms), Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "UpdateHandAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|RoomScale" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_MotionController, "UpdateRoomScaleOutline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_MotionController_NoRegister()
	{
		return ATP_MotionController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_MotionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeamMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRHapticEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRHapticEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialControllerRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialControllerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToGrip_MetaData[];
#endif
		static void NewProp_bWantsToGrip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToGrip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidTeleportDestination_MetaData[];
#endif
		static void NewProp_bIsValidTeleportDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidTeleportDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDestination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRoomScale_MetaData[];
#endif
		static void NewProp_bIsRoomScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRoomScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLastFrameValidDestination_MetaData[];
#endif
		static void NewProp_bLastFrameValidDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLastFrameValidDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporterActive_MetaData[];
#endif
		static void NewProp_bIsTeleporterActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporterActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGripObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGripObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGripObject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGripState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentGripState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentGripState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamVRChaperone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteamVRChaperone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoomScaleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoomScaleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportCylinder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportCylinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcEndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcEndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabShpere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabShpere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_MotionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_MotionController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_MotionController_ActivateTeleporter, "ActivateTeleporter" }, // 2156858822
		{ &Z_Construct_UFunction_ATP_MotionController_ClearArc, "ClearArc" }, // 3145122637
		{ &Z_Construct_UFunction_ATP_MotionController_DestroyActor, "DestroyActor" }, // 1514839863
		{ &Z_Construct_UFunction_ATP_MotionController_DestroyPen, "DestroyPen" }, // 3068113653
		{ &Z_Construct_UFunction_ATP_MotionController_DisableTeleporter, "DisableTeleporter" }, // 1983820482
		{ &Z_Construct_UFunction_ATP_MotionController_GetActorNearHand, "GetActorNearHand" }, // 3753158885
		{ &Z_Construct_UFunction_ATP_MotionController_GetTeleportDestination, "GetTeleportDestination" }, // 2486055622
		{ &Z_Construct_UFunction_ATP_MotionController_GetWantsToGrip, "GetWantsToGrip" }, // 207503556
		{ &Z_Construct_UFunction_ATP_MotionController_GrabActorLeft, "GrabActorLeft" }, // 3913618790
		{ &Z_Construct_UFunction_ATP_MotionController_GrabActorRight, "GrabActorRight" }, // 2283081600
		{ &Z_Construct_UFunction_ATP_MotionController_GrabPen, "GrabPen" }, // 1838939900
		{ &Z_Construct_UFunction_ATP_MotionController_Interaction_PressPointer, "Interaction_PressPointer" }, // 1120503604
		{ &Z_Construct_UFunction_ATP_MotionController_Interaction_ReleasedPointer, "Interaction_ReleasedPointer" }, // 3598992388
		{ &Z_Construct_UFunction_ATP_MotionController_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 3636573839
		{ &Z_Construct_UFunction_ATP_MotionController_ReleaseActor, "ReleaseActor" }, // 3096734293
		{ &Z_Construct_UFunction_ATP_MotionController_RumbleController, "RumbleController" }, // 1679992688
		{ &Z_Construct_UFunction_ATP_MotionController_SetupRoomScaleOutline, "SetupRoomScaleOutline" }, // 3016553709
		{ &Z_Construct_UFunction_ATP_MotionController_TraceTeleportDestination, "TraceTeleportDestination" }, // 3976305062
		{ &Z_Construct_UFunction_ATP_MotionController_TurnOffInteraction, "TurnOffInteraction" }, // 2141644197
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateArcEndPoint, "UpdateArcEndPoint" }, // 2752691212
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateArcSpline, "UpdateArcSpline" }, // 3452228532
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateHandAnimation, "UpdateHandAnimation" }, // 2081684843
		{ &Z_Construct_UFunction_ATP_MotionController_UpdateRoomScaleOutline, "UpdateRoomScaleOutline" }, // 871838148
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_MotionController.h" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Interaction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Interaction = { UE4CodeGen_Private::EPropertyClass::Object, "Interaction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, Interaction), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Interaction_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Interaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor = { UE4CodeGen_Private::EPropertyClass::Object, "AttachedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "BeamMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, BeamMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BeamMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, BeamMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect = { UE4CodeGen_Private::EPropertyClass::Object, "VRHapticEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, VRHapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialControllerRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, InitialControllerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "TeleportLaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, TeleportLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bWantsToGrip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsToGrip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsValidTeleportDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValidTeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, TeleportDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsRoomScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRoomScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bLastFrameValidDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination = { UE4CodeGen_Private::EPropertyClass::Bool, "bLastFrameValidDestination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004000800001000d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, SplineMeshes), METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SplineMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"VRTemplate|Variables\", meta = (AllowPrivateAccess = \"true\"))\nAActor* AttachedActor;" },
	};
#endif
	void Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_SetBit(void* Obj)
	{
		((ATP_MotionController*)Obj)->bIsTeleporterActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTeleporterActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_MotionController), &Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentGripObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, CurrentGripObject), Z_Construct_UEnum_LudensVR_Project_01_EGrip_Object, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "Variables Initialization" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentGripState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010005, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, CurrentGripState), Z_Construct_UEnum_LudensVR_Project_01_EGrip_Code, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SteamVRChaperone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SteamVRChaperone = { UE4CodeGen_Private::EPropertyClass::Object, "SteamVRChaperone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, SteamVRChaperone), Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SteamVRChaperone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SteamVRChaperone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RoomScaleMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, RoomScaleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow = { UE4CodeGen_Private::EPropertyClass::Object, "Arrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, Arrow), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring = { UE4CodeGen_Private::EPropertyClass::Object, "Ring", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, Ring), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder = { UE4CodeGen_Private::EPropertyClass::Object, "TeleportCylinder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, TeleportCylinder), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint = { UE4CodeGen_Private::EPropertyClass::Object, "ArcEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, ArcEndPoint), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere = { UE4CodeGen_Private::EPropertyClass::Object, "GrabShpere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, GrabShpere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline = { UE4CodeGen_Private::EPropertyClass::Object, "ArcSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, ArcSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection = { UE4CodeGen_Private::EPropertyClass::Object, "ArcDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, ArcDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh = { UE4CodeGen_Private::EPropertyClass::Object, "HandMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, HandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_MotionController.h" },
		{ "ToolTip", "Components Initialization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene = { UE4CodeGen_Private::EPropertyClass::Object, "RootScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_MotionController, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_MotionController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Interaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_AttachedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_BeamMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_VRHapticEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_InitialControllerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bWantsToGrip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsValidTeleportDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsRoomScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bLastFrameValidDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_bIsTeleporterActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripObject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_CurrentGripState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_SteamVRChaperone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RoomScaleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Arrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_TeleportCylinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcEndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_GrabShpere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_ArcDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_MotionController_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_MotionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_MotionController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_MotionController_Statics::ClassParams = {
		&ATP_MotionController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_MotionController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_MotionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_MotionController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_MotionController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_MotionController, 279869028);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_MotionController(Z_Construct_UClass_ATP_MotionController, &ATP_MotionController::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_MotionController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_MotionController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
