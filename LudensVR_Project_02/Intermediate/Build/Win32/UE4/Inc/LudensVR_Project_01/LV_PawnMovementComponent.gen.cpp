// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_PawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_PawnMovementComponent() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_PawnMovementComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_PawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void ULV_PawnMovementComponent::StaticRegisterNativesULV_PawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_ULV_PawnMovementComponent_NoRegister()
	{
		return ULV_PawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULV_PawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULV_PawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_PawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_PawnMovementComponent.h" },
		{ "ModuleRelativePath", "Public/LV_PawnMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULV_PawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULV_PawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULV_PawnMovementComponent_Statics::ClassParams = {
		&ULV_PawnMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULV_PawnMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULV_PawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULV_PawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULV_PawnMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULV_PawnMovementComponent, 2627651804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULV_PawnMovementComponent(Z_Construct_UClass_ULV_PawnMovementComponent, &ULV_PawnMovementComponent::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ULV_PawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULV_PawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
