// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_PickupCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PickupCube() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_PickupCube_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ATP_PickupCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	void ATP_PickupCube::StaticRegisterNativesATP_PickupCube()
	{
	}
	UClass* Z_Construct_UClass_ATP_PickupCube_NoRegister()
	{
		return ATP_PickupCube::StaticClass();
	}
	struct Z_Construct_UClass_ATP_PickupCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_PickupCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PickupCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_PickupCube.h" },
		{ "ModuleRelativePath", "TP_PickupCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PickupCube_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRTemplate|Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PickupCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PickupCube_Statics::NewProp_PickupMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PickupMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATP_PickupCube, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP_PickupCube_Statics::NewProp_PickupMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATP_PickupCube_Statics::NewProp_PickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_PickupCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PickupCube_Statics::NewProp_PickupMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATP_PickupCube_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_PickupCube, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_PickupCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_PickupCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_PickupCube_Statics::ClassParams = {
		&ATP_PickupCube::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ATP_PickupCube_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ATP_PickupCube_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ATP_PickupCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATP_PickupCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_PickupCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_PickupCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_PickupCube, 1036948887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_PickupCube(Z_Construct_UClass_ATP_PickupCube, &ATP_PickupCube::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ATP_PickupCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_PickupCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
