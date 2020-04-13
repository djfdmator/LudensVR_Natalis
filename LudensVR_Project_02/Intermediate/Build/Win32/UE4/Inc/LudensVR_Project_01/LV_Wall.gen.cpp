// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Object/LV_Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Wall() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Wall_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Wall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALV_Wall::StaticRegisterNativesALV_Wall()
	{
	}
	UClass* Z_Construct_UClass_ALV_Wall_NoRegister()
	{
		return ALV_Wall::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Wall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_Over_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_Over_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_Panel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall_Panel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Wall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Wall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/LV_Wall.h" },
		{ "ModuleRelativePath", "Public/Object/LV_Wall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Over_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Wall.h" },
		{ "ToolTip", "??1_Over_Panel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Over_Panel = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_Over_Panel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Wall, Wall_Over_Panel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Over_Panel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Over_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Panel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Wall.h" },
		{ "ToolTip", "??1_Panel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Panel = { UE4CodeGen_Private::EPropertyClass::Object, "Wall_Panel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Wall, Wall_Panel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Panel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Panel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventObject|" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Wall.h" },
		{ "ToolTip", "??1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall = { UE4CodeGen_Private::EPropertyClass::Object, "Wall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Wall, Wall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Wall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Over_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall_Panel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Wall_Statics::NewProp_Wall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Wall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Wall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Wall_Statics::ClassParams = {
		&ALV_Wall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALV_Wall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Wall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_Wall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Wall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Wall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Wall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Wall, 3768633143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Wall(Z_Construct_UClass_ALV_Wall, &ALV_Wall::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Wall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Wall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
