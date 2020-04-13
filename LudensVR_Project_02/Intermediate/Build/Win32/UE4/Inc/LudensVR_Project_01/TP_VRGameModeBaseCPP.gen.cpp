// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_VRGameModeBaseCPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_VRGameModeBaseCPP() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VRGameModeBaseCPP_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_VRGameModeBaseCPP();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void ATP_VRGameModeBaseCPP::StaticRegisterNativesATP_VRGameModeBaseCPP()
	{
	}
	UClass* Z_Construct_UClass_ATP_VRGameModeBaseCPP_NoRegister()
	{
		return ATP_VRGameModeBaseCPP::StaticClass();
	}
	struct Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_VRGameModeBaseCPP.h" },
		{ "ModuleRelativePath", "TP_VRGameModeBaseCPP.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_VRGameModeBaseCPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::ClassParams = {
		&ATP_VRGameModeBaseCPP::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_VRGameModeBaseCPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_VRGameModeBaseCPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_VRGameModeBaseCPP, 1545739963);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_VRGameModeBaseCPP(Z_Construct_UClass_ATP_VRGameModeBaseCPP, &ATP_VRGameModeBaseCPP::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_VRGameModeBaseCPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_VRGameModeBaseCPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
