// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Object/LV_Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Door() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Door_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Door();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_OnOverlapEnd();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_OpenCloseDoor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_SetCurrentRotation();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_SetDoorDirection();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_SetlockDoor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Door_SetUnlockDoor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALV_Door::StaticRegisterNativesALV_Door()
	{
		UClass* Class = ALV_Door::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDoorSpeed", &ALV_Door::execCalculateDoorSpeed },
			{ "FollowingCurrentRotation", &ALV_Door::execFollowingCurrentRotation },
			{ "NormalizationDoorLocation", &ALV_Door::execNormalizationDoorLocation },
			{ "OnComponentBeginOverlap", &ALV_Door::execOnComponentBeginOverlap },
			{ "OnOverlapEnd", &ALV_Door::execOnOverlapEnd },
			{ "OpenCloseDoor", &ALV_Door::execOpenCloseDoor },
			{ "SetCurrentRotation", &ALV_Door::execSetCurrentRotation },
			{ "SetDoorDirection", &ALV_Door::execSetDoorDirection },
			{ "SetlockDoor", &ALV_Door::execSetlockDoor },
			{ "SetUnlockDoor", &ALV_Door::execSetUnlockDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "CalculateDoorSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "?\xda\xb5? ????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "FollowingCurrentRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "NormalizationDoorLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics
	{
		struct LV_Door_eventOnComponentBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LV_Door_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_Door_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "???? ?\xcc\xba?\xc6\xae ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "OnComponentBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(LV_Door_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics
	{
		struct LV_Door_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_Door_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "OpenCloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_OpenCloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_OpenCloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics
	{
		struct LV_Door_eventSetCurrentRotation_Parms
		{
			float rotate_Yaw;
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotate_Yaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventSetCurrentRotation_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::NewProp_rotate_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "rotate_Yaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Door_eventSetCurrentRotation_Parms, rotate_Yaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::NewProp_rotate_Yaw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "SetCurrentRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_Door_eventSetCurrentRotation_Parms), Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_SetCurrentRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_SetCurrentRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "?????? ???? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "SetDoorDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_SetDoorDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_SetDoorDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "SetlockDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_SetlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_SetlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Door, "SetUnlockDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Door_SetUnlockDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Door_SetUnlockDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_Door_NoRegister()
	{
		return ALV_Door::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Door_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lock_MetaData[];
#endif
		static void NewProp_lock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_lock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stay_MetaData[];
#endif
		static void NewProp_stay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_stay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_closeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_closeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpenSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrapedKnob_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrapedKnob;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_Wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_Wall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WallFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrameMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrameMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnobMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KnobMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Door_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_Door_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_Door_CalculateDoorSpeed, "CalculateDoorSpeed" }, // 24844666
		{ &Z_Construct_UFunction_ALV_Door_FollowingCurrentRotation, "FollowingCurrentRotation" }, // 3061885307
		{ &Z_Construct_UFunction_ALV_Door_NormalizationDoorLocation, "NormalizationDoorLocation" }, // 442115270
		{ &Z_Construct_UFunction_ALV_Door_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 3956790569
		{ &Z_Construct_UFunction_ALV_Door_OnOverlapEnd, "OnOverlapEnd" }, // 3644876769
		{ &Z_Construct_UFunction_ALV_Door_OpenCloseDoor, "OpenCloseDoor" }, // 3396014206
		{ &Z_Construct_UFunction_ALV_Door_SetCurrentRotation, "SetCurrentRotation" }, // 146899731
		{ &Z_Construct_UFunction_ALV_Door_SetDoorDirection, "SetDoorDirection" }, // 2069127354
		{ &Z_Construct_UFunction_ALV_Door_SetlockDoor, "SetlockDoor" }, // 307143626
		{ &Z_Construct_UFunction_ALV_Door_SetUnlockDoor, "SetUnlockDoor" }, // 3548293923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/LV_Door.h" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_lock_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	void Z_Construct_UClass_ALV_Door_Statics::NewProp_lock_SetBit(void* Obj)
	{
		((ALV_Door*)Obj)->lock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_lock = { UE4CodeGen_Private::EPropertyClass::Bool, "lock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_Door), &Z_Construct_UClass_ALV_Door_Statics::NewProp_lock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_lock_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_lock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_stay_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	void Z_Construct_UClass_ALV_Door_Statics::NewProp_stay_SetBit(void* Obj)
	{
		((ALV_Door*)Obj)->stay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_stay = { UE4CodeGen_Private::EPropertyClass::Bool, "stay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_Door), &Z_Construct_UClass_ALV_Door_Statics::NewProp_stay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_stay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_stay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_CurrentRotation = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Door, CurrentRotation), METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_CurrentRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_closeSpeed_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_closeSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "closeSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Door, closeSpeed), METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_closeSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_closeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_Min_Yaw_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_Min_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Min_Yaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Door, Min_Yaw), METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_Min_Yaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_Min_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_Max_Yaw_MetaData[] = {
		{ "Category", "DoorRotation" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "??\xc8\xb9?\xda\xbe? ?\xc9\xb9??? ?\xc5\xb8?????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_Max_Yaw = { UE4CodeGen_Private::EPropertyClass::Float, "Max_Yaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Door, Max_Yaw), METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_Max_Yaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_Max_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_Door, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_OpenSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_OpenSound = { UE4CodeGen_Private::EPropertyClass::Object, "OpenSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Door, OpenSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_OpenSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_OpenSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_CloseSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_CloseSound = { UE4CodeGen_Private::EPropertyClass::Object, "CloseSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Door, CloseSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_CloseSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_CloseSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_HandMesh_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_HandMesh = { UE4CodeGen_Private::EPropertyClass::Object, "HandMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_Door, HandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_HandMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_GrapedKnob_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_GrapedKnob = { UE4CodeGen_Private::EPropertyClass::Object, "GrapedKnob", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_Door, GrapedKnob), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_GrapedKnob_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_GrapedKnob_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Natalis\")\n               class UBoxComponent* BoxCollider;\n//???????? ?\xde\xbe\xc6\xbf??? ????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_Door, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_Hand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_BoxCollider_Wall_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_BoxCollider_Wall = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_Wall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Door, BoxCollider_Wall), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_BoxCollider_Wall_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_BoxCollider_Wall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DoorMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Door, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_WallFrame_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_WallFrame = { UE4CodeGen_Private::EPropertyClass::Object, "WallFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Door, WallFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_WallFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_WallFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorFrameMesh_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorFrameMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DoorFrameMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Door, DoorFrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorFrameMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorFrameMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Door_Statics::NewProp_KnobMesh_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Door.h" },
		{ "ToolTip", "?\xe2\xba\xbb???? ?? ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Door_Statics::NewProp_KnobMesh = { UE4CodeGen_Private::EPropertyClass::Object, "KnobMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Door, KnobMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::NewProp_KnobMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::NewProp_KnobMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Door_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_lock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_stay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_CurrentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_closeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_Min_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_Max_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_OpenSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_CloseSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_GrapedKnob,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_BoxCollider_Wall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_WallFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_DoorFrameMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Door_Statics::NewProp_KnobMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Door_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Door>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Door_Statics::ClassParams = {
		&ALV_Door::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_Door_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_Door_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Door_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Door()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Door_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Door, 2901897597);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Door(Z_Construct_UClass_ALV_Door, &ALV_Door::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Door"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Door);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
