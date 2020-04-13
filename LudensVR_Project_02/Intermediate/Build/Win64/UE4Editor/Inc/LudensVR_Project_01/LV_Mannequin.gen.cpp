// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/Object/LV_Mannequin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Mannequin() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Mannequin_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Mannequin();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ALV_Mannequin::StaticRegisterNativesALV_Mannequin()
	{
	}
	UClass* Z_Construct_UClass_ALV_Mannequin_NoRegister()
	{
		return ALV_Mannequin::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Mannequin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneCompo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneCompo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__child_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__child_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Female_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Female_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_child_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_child;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Female;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Mannequin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Object/LV_Mannequin.h" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_SceneCompo_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_SceneCompo = { UE4CodeGen_Private::EPropertyClass::Object, "SceneCompo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Mannequin, SceneCompo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_SceneCompo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_SceneCompo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__child_Anim_MetaData[] = {
		{ "Category", "Natalis" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__child_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "_child_Anim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Mannequin, _child_Anim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__child_Anim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__child_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__Female_Anim_MetaData[] = {
		{ "Category", "Natalis" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__Female_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "_Female_Anim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Mannequin, _Female_Anim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__Female_Anim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__Female_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_child_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_child = { UE4CodeGen_Private::EPropertyClass::Object, "child", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Mannequin, child), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_child_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_child_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_Female_MetaData[] = {
		{ "Category", "Natalis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Object/LV_Mannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_Female = { UE4CodeGen_Private::EPropertyClass::Object, "Female", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ALV_Mannequin, Female), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_Female_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_Female_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Mannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_SceneCompo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__child_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Mannequin_Statics::NewProp__Female_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_child,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Mannequin_Statics::NewProp_Female,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Mannequin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Mannequin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Mannequin_Statics::ClassParams = {
		&ALV_Mannequin::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALV_Mannequin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALV_Mannequin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Mannequin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Mannequin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Mannequin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Mannequin, 1084517974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Mannequin(Z_Construct_UClass_ALV_Mannequin, &ALV_Mannequin::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Mannequin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Mannequin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
