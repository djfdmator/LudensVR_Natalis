// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Event.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Event() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Event_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Event();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Event_MannequinAnimation();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Event_OnOverlapEnd();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Event_Outro();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Wall_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Door_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_Logo_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Mannequin_NoRegister();
// End Cross Module References
	void ALV_Event::StaticRegisterNativesALV_Event()
	{
		UClass* Class = ALV_Event::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MannequinAnimation", &ALV_Event::execMannequinAnimation },
			{ "OnComponentBeginOverlap", &ALV_Event::execOnComponentBeginOverlap },
			{ "OnOverlapEnd", &ALV_Event::execOnOverlapEnd },
			{ "Outro", &ALV_Event::execOutro },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Event, "MannequinAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Event_MannequinAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Event_MannequinAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics
	{
		struct LV_Event_eventOnComponentBeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LV_Event_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_Event_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Event, "OnComponentBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(LV_Event_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics
	{
		struct LV_Event_eventOnOverlapEnd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Event_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Event, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(LV_Event_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Event_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Event_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Event_Outro_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Event_Outro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Event_Outro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Event, "Outro", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Event_Outro_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Event_Outro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Event_Outro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Event_Outro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_Event_NoRegister()
	{
		return ALV_Event::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Event_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eventIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_eventIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGM_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BGM_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_BGM_Horror4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_BGM_Horror4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_BGM_Horror5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_BGM_Horror5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Open_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Open_Door;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Lightbulb_Broken_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Lightbulb_Broken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Child_Laughing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Child_Laughing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Event_Start_CloseDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Event_Start_CloseDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Event_Start_OpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Event_Start_OpenDoor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_Event_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger_Event_Start;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_3_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_3_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_3_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_3_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_2_4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_2_4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_2_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_2_3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_2_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_2_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_2_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_2_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_1_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_1_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_1_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_1_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_Event0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_Event0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Logo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Logo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_manne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_manne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Event_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_Event_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_Event_MannequinAnimation, "MannequinAnimation" }, // 998203667
		{ &Z_Construct_UFunction_ALV_Event_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 4281904818
		{ &Z_Construct_UFunction_ALV_Event_OnOverlapEnd, "OnOverlapEnd" }, // 3201115863
		{ &Z_Construct_UFunction_ALV_Event_Outro, "Outro" }, // 4185939503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Event.h" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EventStateEnum : uint8\n{\n       Event0 UMETA(DisplayName = \"Option A\"),\n       TE_OptionB UMETA(DisplayName = \"Option B\"),\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_eventIndex_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?\xcc\xba?\xc6\xae ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_eventIndex = { UE4CodeGen_Private::EPropertyClass::Int, "eventIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, eventIndex), METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_eventIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_eventIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_BGM_AudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_BGM_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BGM_AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_Event, BGM_AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_BGM_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_BGM_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent2_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent2 = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Event, AudioComponent2), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent1_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?????? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent1 = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Event, AudioComponent1), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror4_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror4 = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_BGM_Horror4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_BGM_Horror4), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror5_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror5 = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_BGM_Horror5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_BGM_Horror5), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror5_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Open_Door_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Open_Door = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Open_Door", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_Open_Door), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Open_Door_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Open_Door_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Lightbulb_Broken_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Lightbulb_Broken = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Lightbulb_Broken", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_Lightbulb_Broken), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Lightbulb_Broken_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Lightbulb_Broken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Child_Laughing_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Child_Laughing = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Child_Laughing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_Child_Laughing), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Child_Laughing_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Child_Laughing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_CloseDoor_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_CloseDoor = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Event_Start_CloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_Event_Start_CloseDoor), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_CloseDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_CloseDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_OpenDoor_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_OpenDoor = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Event_Start_OpenDoor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Sound_Event_Start_OpenDoor), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_OpenDoor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_OpenDoor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_End_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_End = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event_End", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event_End), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_End_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event4_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event4 = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event4), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event3 = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event3), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event2 = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event2), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? ?? ?? ???? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event1 = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event1), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event0_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???? ?? ?? ?? ???? ???\xee\xb0\xa5?? ?\xdb\xb5??\xcf\xb4? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event0 = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event0), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event0_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_Start_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "???\xdb\xb9? ?? ?????? \xc6\xae????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_Start = { UE4CodeGen_Private::EPropertyClass::Object, "Trigger_Event_Start", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, Trigger_Event_Start), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_Start_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_Start_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_2_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_2 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_3_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_3_2), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_1_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "??3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_1 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_3_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_3_1), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_4_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_4 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_2_4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_2_4), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_3_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_3 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_2_3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_2_3), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_2_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_2 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_2_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_2_2), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_1_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "??2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_1 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_2_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_2_1), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_2_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_2 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_1_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_1_2), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_1_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "??1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_1 = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_1_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Wall_1_1), Z_Construct_UClass_ALV_Wall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event6_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event6 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event6", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event6), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event6_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event5_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "???\xcc\xb9? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event5 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event5), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event5_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event4_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "???\xdc\xb9?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event4 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event4), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event3_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "\xc8\xad???\xc7\xbf??? ???? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event3 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event3), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event3_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event2_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?\xc8\xb9\xe6\xbf\xa1?? \xc8\xad???? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event2 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event2), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event1_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?\xc8\xb9? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event1 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event1), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event0_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "???? ???\xdb\xbd? ?????? ??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event0 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_Event0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Door_Event0), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event0_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_Logo_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_Logo = { UE4CodeGen_Private::EPropertyClass::Object, "Logo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, Logo), Z_Construct_UClass_AGM_Logo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_Logo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_Logo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_manne_MetaData[] = {
		{ "Category", "LV_Event" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_manne = { UE4CodeGen_Private::EPropertyClass::Object, "manne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_Event, manne), Z_Construct_UClass_ALV_Mannequin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_manne_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_manne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Event_Statics::NewProp_EventManager_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Event.h" },
		{ "ToolTip", "?\xcc\xba?\xc6\xae ??\xc3\xbc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Event_Statics::NewProp_EventManager = { UE4CodeGen_Private::EPropertyClass::Object, "EventManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Event, EventManager), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::NewProp_EventManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::NewProp_EventManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Event_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_eventIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_BGM_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_AudioComponent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_BGM_Horror5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Open_Door,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Lightbulb_Broken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Child_Laughing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_CloseDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Sound_Event_Start_OpenDoor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Trigger_Event_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_3_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_2_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Wall_1_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Door_Event0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_Logo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_manne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Event_Statics::NewProp_EventManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Event_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Event>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Event_Statics::ClassParams = {
		&ALV_Event::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_Event_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_Event_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Event_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Event()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Event_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Event, 58260505);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Event(Z_Construct_UClass_ALV_Event, &ALV_Event::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Event"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Event);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
