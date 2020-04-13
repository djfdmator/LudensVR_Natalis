// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Lantern.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Lantern() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Lantern_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Lantern();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Lantern_Light_Switch();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	void ALV_Lantern::StaticRegisterNativesALV_Lantern()
	{
		UClass* Class = ALV_Lantern::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Light_Switch", &ALV_Lantern::execLight_Switch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
		{ "ToolTip", "?\xdf\xb0?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Lantern, "Light_Switch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Lantern_Light_Switch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Lantern_Light_Switch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_Lantern_NoRegister()
	{
		return ALV_Lantern::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Lantern_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_Color_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_Color_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_Color_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_Color_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_Color_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_Color_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Light_Internsity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Light_Internsity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLightAssistant_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLightAssistant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanternMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LanternMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Lantern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_Lantern_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_Lantern_Light_Switch, "Light_Switch" }, // 3388550305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Lantern.h" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Length_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpotLight" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Light_Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, Light_Length), METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Length_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_B_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpotLight" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_B = { UE4CodeGen_Private::EPropertyClass::Float, "Light_Color_B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, Light_Color_B), METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_G_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpotLight" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_G = { UE4CodeGen_Private::EPropertyClass::Float, "Light_Color_G", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, Light_Color_G), METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_G_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_R_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpotLight" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_R = { UE4CodeGen_Private::EPropertyClass::Float, "Light_Color_R", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, Light_Color_R), METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_R_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Internsity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SpotLight" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
		{ "ToolTip", "Light" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Internsity = { UE4CodeGen_Private::EPropertyClass::Float, "Light_Internsity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, Light_Internsity), METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Internsity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Internsity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLightAssistant_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lantern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLightAssistant = { UE4CodeGen_Private::EPropertyClass::Object, "SpotLightAssistant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, SpotLightAssistant), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLightAssistant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLightAssistant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lantern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLight = { UE4CodeGen_Private::EPropertyClass::Object, "SpotLight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Lantern_Statics::NewProp_LanternMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lantern" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Lantern.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Lantern_Statics::NewProp_LanternMesh = { UE4CodeGen_Private::EPropertyClass::Object, "LanternMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Lantern, LanternMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_LanternMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::NewProp_LanternMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Lantern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Color_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_Light_Internsity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLightAssistant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_SpotLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Lantern_Statics::NewProp_LanternMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALV_Lantern_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALV_Lantern, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Lantern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Lantern>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Lantern_Statics::ClassParams = {
		&ALV_Lantern::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_Lantern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALV_Lantern_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Lantern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Lantern()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Lantern_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Lantern, 382529622);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Lantern(Z_Construct_UClass_ALV_Lantern, &ALV_Lantern::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Lantern"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Lantern);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
