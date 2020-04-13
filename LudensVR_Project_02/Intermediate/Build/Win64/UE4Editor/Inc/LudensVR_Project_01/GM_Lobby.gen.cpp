// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GM_Lobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Lobby() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_Lobby_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_AGM_Lobby();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	void AGM_Lobby::StaticRegisterNativesAGM_Lobby()
	{
	}
	UClass* Z_Construct_UClass_AGM_Lobby_NoRegister()
	{
		return AGM_Lobby::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Lobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Lobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Lobby_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GM_Lobby.h" },
		{ "ModuleRelativePath", "Public/GM_Lobby.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Lobby_Statics::NewProp_widget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lobby" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GM_Lobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Lobby_Statics::NewProp_widget = { UE4CodeGen_Private::EPropertyClass::Object, "widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AGM_Lobby, widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGM_Lobby_Statics::NewProp_widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGM_Lobby_Statics::NewProp_widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Lobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Lobby_Statics::NewProp_widget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Lobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Lobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_Lobby_Statics::ClassParams = {
		&AGM_Lobby::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGM_Lobby_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGM_Lobby_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGM_Lobby_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGM_Lobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_Lobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_Lobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_Lobby, 1378108398);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_Lobby(Z_Construct_UClass_AGM_Lobby, &AGM_Lobby::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("AGM_Lobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Lobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
