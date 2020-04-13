// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_VirtualRealityPawn_Motion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VirtualRealityPawn_Motion() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Door_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Stair_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Holder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ATP_VirtualRealityPawn_Motion::StaticRegisterNativesATP_VirtualRealityPawn_Motion()
	{
		UClass* Class = ATP_VirtualRealityPawn_Motion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleBeginOverlap", &ATP_VirtualRealityPawn_Motion::execCapsuleBeginOverlap },
			{ "CapsuleEndOverlap", &ATP_VirtualRealityPawn_Motion::execCapsuleEndOverlap },
			{ "ExecuteTeleportation", &ATP_VirtualRealityPawn_Motion::execExecuteTeleportation },
			{ "GetRotationFromInput", &ATP_VirtualRealityPawn_Motion::execGetRotationFromInput },
			{ "Light_Switch", &ATP_VirtualRealityPawn_Motion::execLight_Switch },
			{ "TeleportActor", &ATP_VirtualRealityPawn_Motion::execTeleportActor },
			{ "WidgetPressed", &ATP_VirtualRealityPawn_Motion::execWidgetPressed },
			{ "WidgetReleased", &ATP_VirtualRealityPawn_Motion::execWidgetReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "CapsuleBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(TP_VirtualRealityPawn_Motion_eventCapsuleBeginOverlap_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "CapsuleEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(TP_VirtualRealityPawn_Motion_eventCapsuleEndOverlap_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "ExecuteTeleportation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_VirtualRealityPawn_Motion_eventExecuteTeleportation_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms
		{
			float UpAxis;
			float RightAxis;
			ATP_MotionController* MotionController;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis = { UE4CodeGen_Private::EPropertyClass::Float, "RightAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis = { UE4CodeGen_Private::EPropertyClass::Float, "UpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms, UpAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::NewProp_UpAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "GetRotationFromInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(TP_VirtualRealityPawn_Motion_eventGetRotationFromInput_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "Light_Switch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics
	{
		struct TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms
		{
			ATP_MotionController* MotionController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::NewProp_MotionController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "TeleportActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TP_VirtualRealityPawn_Motion_eventTeleportActor_Parms), Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "WidgetPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, "WidgetReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_NoRegister()
	{
		return ATP_VirtualRealityPawn_Motion::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door10_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door10;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door8_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door6_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door5_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door1_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door1_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StairTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StairTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_Walking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound_Walking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolderSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HolderSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRollToRotate_MetaData[];
#endif
		static void NewProp_bUseControllerRollToRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRollToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayerHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeftStickDown_MetaData[];
#endif
		static void NewProp_bLeftStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeftStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRightStickDown_MetaData[];
#endif
		static void NewProp_bRightStickDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRightStickDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbDeadzone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbDeadzone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportFadeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeleporting_MetaData[];
#endif
		static void NewProp_bIsTeleporting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeleporting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftController;
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
	UObject* (*const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleBeginOverlap, "CapsuleBeginOverlap" }, // 2878932427
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_CapsuleEndOverlap, "CapsuleEndOverlap" }, // 3602905516
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_ExecuteTeleportation, "ExecuteTeleportation" }, // 3178197200
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_GetRotationFromInput, "GetRotationFromInput" }, // 2507296352
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_Light_Switch, "Light_Switch" }, // 755227183
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_TeleportActor, "TeleportActor" }, // 1638118067
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetPressed, "WidgetPressed" }, // 3294297096
		{ &Z_Construct_UFunction_ATP_VirtualRealityPawn_Motion_WidgetReleased, "WidgetReleased" }, // 4085143624
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_VirtualRealityPawn_Motion.h" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door10_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door10 = { UE4CodeGen_Private::EPropertyClass::Object, "Door10", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door10), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door10_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door10_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door8_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door8 = { UE4CodeGen_Private::EPropertyClass::Object, "Door8", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door8), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door8_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door6_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door6 = { UE4CodeGen_Private::EPropertyClass::Object, "Door6", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door6), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door6_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door5_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door5 = { UE4CodeGen_Private::EPropertyClass::Object, "Door5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door5), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door5_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door4_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door4 = { UE4CodeGen_Private::EPropertyClass::Object, "Door4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door4), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door_1_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door_1 = { UE4CodeGen_Private::EPropertyClass::Object, "Door_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door_1), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door1_2_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
		{ "ToolTip", "Door" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door1_2 = { UE4CodeGen_Private::EPropertyClass::Object, "Door1_2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door1_2), Z_Construct_UClass_ALV_Door_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door1_2_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door1_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_StairTrigger_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_StairTrigger = { UE4CodeGen_Private::EPropertyClass::Object, "StairTrigger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, StairTrigger), Z_Construct_UClass_ALV_Stair_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_StairTrigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_StairTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Sound_Walking_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Sound_Walking = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Walking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Sound_Walking), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Sound_Walking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Sound_Walking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_HolderSpawn_MetaData[] = {
		{ "Category", "TP_VirtualRealityPawn_Motion" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_HolderSpawn = { UE4CodeGen_Private::EPropertyClass::Object, "HolderSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, HolderSpawn), Z_Construct_UClass_ALV_Holder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_HolderSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_HolderSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bUseControllerRollToRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRollToRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultPlayerHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, DefaultPlayerHeight), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bLeftStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeftStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bRightStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bRightStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbDeadzone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, ThumbDeadzone), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportFadeColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, TeleportFadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	void Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit(void* Obj)
	{
		((ATP_VirtualRealityPawn_Motion*)Obj)->bIsTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTeleporting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATP_VirtualRealityPawn_Motion), &Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController = { UE4CodeGen_Private::EPropertyClass::Object, "RightController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RightController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController = { UE4CodeGen_Private::EPropertyClass::Object, "LeftController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, LeftController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, CameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_VirtualRealityPawn_Motion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene = { UE4CodeGen_Private::EPropertyClass::Object, "RootScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door10,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Door1_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_StairTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_Sound_Walking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_HolderSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bUseControllerRollToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_DefaultPlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bLeftStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bRightStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_ThumbDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_TeleportFadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_bIsTeleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_VRCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VirtualRealityPawn_Motion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams = {
		&ATP_VirtualRealityPawn_Motion::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VirtualRealityPawn_Motion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VirtualRealityPawn_Motion, 1733597180);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VirtualRealityPawn_Motion(Z_Construct_UClass_ATP_VirtualRealityPawn_Motion, &ATP_VirtualRealityPawn_Motion::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_VirtualRealityPawn_Motion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VirtualRealityPawn_Motion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
