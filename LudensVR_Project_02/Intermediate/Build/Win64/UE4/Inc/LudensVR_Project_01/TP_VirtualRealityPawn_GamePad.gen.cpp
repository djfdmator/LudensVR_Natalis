// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_VirtualRealityPawn_GamePad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VirtualRealityPawn_GamePad() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATP_VirtualRealityPawn_GamePad::StaticRegisterNativesATP_VirtualRealityPawn_GamePad()
	{
		UClass* Class = ATP_VirtualRealityPawn_GamePad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTeleportDestination", &ATP_VirtualRealityPawn_GamePad::execGetTeleportDestination },
			{ "GetThumbstickFacingDirection", &ATP_VirtualRealityPawn_GamePad::execGetThumbstickFacingDirection },
			{ "ShouldUpdateFacingDirection", &ATP_VirtualRealityPawn_GamePad::execShouldUpdateFacingDirection },
			{ "TeleportActor", &ATP_VirtualRealityPawn_GamePad::execTeleportActor },
			{ "UpdateTeleportDirection", &ATP_VirtualRealityPawn_GamePad::execUpdateTeleportDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics
	{
		struct TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms
		{
			FVector MyLocation;
			FVector HitNormal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms), &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_MyLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "MyLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms, MyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::NewProp_MyLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, "GetTeleportDestination", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C20401, sizeof(TP_VirtualRealityPawn_GamePad_eventGetTeleportDestination_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics
	{
		struct TP_VirtualRealityPawn_GamePad_eventGetThumbstickFacingDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_GamePad_eventGetThumbstickFacingDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, "GetThumbstickFacingDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(TP_VirtualRealityPawn_GamePad_eventGetThumbstickFacingDirection_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics
	{
		struct TP_VirtualRealityPawn_GamePad_eventShouldUpdateFacingDirection_Parms
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
	void Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TP_VirtualRealityPawn_GamePad_eventShouldUpdateFacingDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_VirtualRealityPawn_GamePad_eventShouldUpdateFacingDirection_Parms), &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, "ShouldUpdateFacingDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(TP_VirtualRealityPawn_GamePad_eventShouldUpdateFacingDirection_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, "TeleportActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|Teleportation" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, "UpdateTeleportDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_NoRegister()
	{
		return ATP_VirtualRealityPawn_GamePad::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGamepad_MetaData[];
#endif
		static void NewProp_bUseGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingGlowMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingGlowMatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportFadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentLocationValid_MetaData[];
#endif
		static void NewProp_bCurrentLocationValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentLocationValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLengthThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationLengthThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinnedRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocationPinned_MetaData[];
#endif
		static void NewProp_bLocationPinned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocationPinned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocationFound_MetaData[];
#endif
		static void NewProp_bLocationFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocationFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinnedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinnedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportPin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetTeleportDestination, "GetTeleportDestination" }, // 3008089285
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_GetThumbstickFacingDirection, "GetThumbstickFacingDirection" }, // 1557836667
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_ShouldUpdateFacingDirection, "ShouldUpdateFacingDirection" }, // 1566703371
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_TeleportActor, "TeleportActor" }, // 3127276274
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_GamePad_UpdateTeleportDirection, "UpdateTeleportDirection" }, // 326209723
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_VirtualRealityPawn_GamePad.h" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_GamePad*)Obj)->bUseGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGamepad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_GamePad), &Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RingGlowMatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RingGlowMatInst = { UE4CodeGen_Private::EPropertyClass::Object, "RingGlowMatInst", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RingGlowMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RingGlowMatInst_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RingGlowMatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_DefaultPlayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_DefaultPlayerHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultPlayerHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, DefaultPlayerHeight), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_DefaultPlayerHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportFadeColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportFadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportFadeColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TeleportFadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportFadeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportFadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_GamePad*)Obj)->bCurrentLocationValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurrentLocationValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_GamePad), &Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CurrentLookAtLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CurrentLookAtLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLookAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, CurrentLookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CurrentLookAtLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CurrentLookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RotationLengthThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RotationLengthThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "RotationLengthThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RotationLengthThreshold), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RotationLengthThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RotationLengthThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "PinnedRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, PinnedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_GamePad*)Obj)->bLocationPinned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned = { UE4CodeGen_Private::EPropertyClass::Bool, "bLocationPinned", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_GamePad), &Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_GamePad*)Obj)->bLocationFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound = { UE4CodeGen_Private::EPropertyClass::Bool, "bLocationFound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_GamePad), &Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "PinnedLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, PinnedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Arrow_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Arrow = { UE4CodeGen_Private::EPropertyClass::Object, "Arrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, Arrow), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Arrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Arrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Ring_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Ring = { UE4CodeGen_Private::EPropertyClass::Object, "Ring", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, Ring), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Ring_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportPin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportPin = { UE4CodeGen_Private::EPropertyClass::Object, "TeleportPin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TeleportPin), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportPin_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportPin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TraceDirection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TraceDirection = { UE4CodeGen_Private::EPropertyClass::Object, "TraceDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TraceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TraceDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_VRCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_VRCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_VRCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_VRCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, CameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_GamePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RootScene = { UE4CodeGen_Private::EPropertyClass::Object, "RootScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bUseGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RingGlowMatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_DefaultPlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportFadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bCurrentLocationValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CurrentLookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RotationLengthThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationPinned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_bLocationFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_PinnedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Arrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_Ring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TeleportPin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_TraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_VRCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VirtualRealityPawn_GamePad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::ClassParams = {
		&ATP_VirtualRealityPawn_GamePad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VirtualRealityPawn_GamePad, 1585646573);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VirtualRealityPawn_GamePad(Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad, &ATP_VirtualRealityPawn_GamePad::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_VirtualRealityPawn_GamePad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VirtualRealityPawn_GamePad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
