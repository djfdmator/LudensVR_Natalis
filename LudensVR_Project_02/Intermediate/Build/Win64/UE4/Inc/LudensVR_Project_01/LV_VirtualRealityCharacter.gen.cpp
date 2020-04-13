// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_VirtualRealityCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_VirtualRealityCharacter() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_VirtualRealityCharacter_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_VirtualRealityCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_MotionController_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Holder_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusBoundaryComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ALV_VirtualRealityCharacter::StaticRegisterNativesALV_VirtualRealityCharacter()
	{
		UClass* Class = ALV_VirtualRealityCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRotationFromInput", &ALV_VirtualRealityCharacter::execGetRotationFromInput },
			{ "Light_Switch", &ALV_VirtualRealityCharacter::execLight_Switch },
			{ "WidgetPressed", &ALV_VirtualRealityCharacter::execWidgetPressed },
			{ "WidgetReleased", &ALV_VirtualRealityCharacter::execWidgetReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics
	{
		struct LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms, MotionController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_RightAxis = { UE4CodeGen_Private::EPropertyClass::Float, "RightAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_UpAxis = { UE4CodeGen_Private::EPropertyClass::Float, "UpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms, UpAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_MotionController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::NewProp_UpAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_VirtualRealityCharacter, "GetRotationFromInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(LV_VirtualRealityCharacter_eventGetRotationFromInput_Parms), Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
		{ "ToolTip", "Lantern Control" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_VirtualRealityCharacter, "Light_Switch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_VirtualRealityCharacter, "WidgetPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_VirtualRealityCharacter, "WidgetReleased", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_VirtualRealityCharacter_NoRegister()
	{
		return ALV_VirtualRealityCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundaryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCameraBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCameraBase;
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
	UObject* (*const Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_VirtualRealityCharacter_GetRotationFromInput, "GetRotationFromInput" }, // 3283841723
		{ &Z_Construct_UFunction_ALV_VirtualRealityCharacter_Light_Switch, "Light_Switch" }, // 1162934343
		{ &Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetPressed, "WidgetPressed" }, // 2524324559
		{ &Z_Construct_UFunction_ALV_VirtualRealityCharacter_WidgetReleased, "WidgetReleased" }, // 239798311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LV_VirtualRealityCharacter.h" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_Sound_Walking_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_Sound_Walking = { UE4CodeGen_Private::EPropertyClass::Object, "Sound_Walking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, Sound_Walking), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_Sound_Walking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_Sound_Walking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_HolderSpawn_MetaData[] = {
		{ "Category", "LV_VirtualRealityCharacter" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_HolderSpawn = { UE4CodeGen_Private::EPropertyClass::Object, "HolderSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, HolderSpawn), Z_Construct_UClass_ALV_Holder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_HolderSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_HolderSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate_SetBit(void* Obj)
	{
		((ALV_VirtualRealityCharacter*)Obj)->bUseControllerRollToRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRollToRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_VirtualRealityCharacter), &Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_DefaultPlayerHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_DefaultPlayerHeight = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultPlayerHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, DefaultPlayerHeight), METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_DefaultPlayerHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_DefaultPlayerHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown_SetBit(void* Obj)
	{
		((ALV_VirtualRealityCharacter*)Obj)->bLeftStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeftStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_VirtualRealityCharacter), &Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown_SetBit(void* Obj)
	{
		((ALV_VirtualRealityCharacter*)Obj)->bRightStickDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bRightStickDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_VirtualRealityCharacter), &Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_ThumbDeadzone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_ThumbDeadzone = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbDeadzone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, ThumbDeadzone), METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_ThumbDeadzone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_ThumbDeadzone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_TeleportFadeColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_TeleportFadeColor = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportFadeColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, TeleportFadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_TeleportFadeColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_TeleportFadeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting_SetBit(void* Obj)
	{
		((ALV_VirtualRealityCharacter*)Obj)->bIsTeleporting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTeleporting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_VirtualRealityCharacter), &Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeInDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeOutDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RightController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RightController = { UE4CodeGen_Private::EPropertyClass::Object, "RightController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, RightController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RightController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_LeftController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Variables" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_LeftController = { UE4CodeGen_Private::EPropertyClass::Object, "LeftController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, LeftController), Z_Construct_UClass_ATP_MotionController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_LeftController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_BoundaryComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_BoundaryComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoundaryComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, BoundaryComponent), Z_Construct_UClass_UOculusBoundaryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_BoundaryComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_BoundaryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "VRCameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, VRCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, VRCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_CameraBase_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_CameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, CameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_CameraBase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_CameraBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_VirtualRealityCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RootScene = { UE4CodeGen_Private::EPropertyClass::Object, "RootScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_VirtualRealityCharacter, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RootScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_Sound_Walking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_HolderSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bUseControllerRollToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_DefaultPlayerHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bLeftStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bRightStickDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_ThumbDeadzone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_TeleportFadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_bIsTeleporting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RightController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_LeftController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_BoundaryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_VRCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_CameraBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_VirtualRealityCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::ClassParams = {
		&ALV_VirtualRealityCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_VirtualRealityCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_VirtualRealityCharacter, 3313647401);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_VirtualRealityCharacter(Z_Construct_UClass_ALV_VirtualRealityCharacter, &ALV_VirtualRealityCharacter::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_VirtualRealityCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_VirtualRealityCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
