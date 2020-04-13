// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Pen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Pen() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Pen_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Pen();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	void ALV_Pen::StaticRegisterNativesALV_Pen()
	{
	}
	UClass* Z_Construct_UClass_ALV_Pen_NoRegister()
	{
		return ALV_Pen::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Pen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_Pen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_Pen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PenMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PenMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Pen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Pen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Pen.h" },
		{ "ModuleRelativePath", "Public/LV_Pen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Pen_Statics::NewProp_BoxCollider_Pen_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Pen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Pen_Statics::NewProp_BoxCollider_Pen = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_Pen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Pen, BoxCollider_Pen), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Pen_Statics::NewProp_BoxCollider_Pen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Pen_Statics::NewProp_BoxCollider_Pen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Pen_Statics::NewProp_PenMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Pen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Pen_Statics::NewProp_PenMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PenMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Pen, PenMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Pen_Statics::NewProp_PenMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Pen_Statics::NewProp_PenMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Pen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Pen_Statics::NewProp_BoxCollider_Pen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Pen_Statics::NewProp_PenMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALV_Pen_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALV_Pen, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Pen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Pen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Pen_Statics::ClassParams = {
		&ALV_Pen::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALV_Pen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Pen_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALV_Pen_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Pen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Pen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Pen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Pen, 1729799181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Pen(Z_Construct_UClass_ALV_Pen, &ALV_Pen::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Pen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Pen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
