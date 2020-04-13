// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GM_LogoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_LogoWidget() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UGM_LogoWidget_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UGM_LogoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
// End Cross Module References
	void UGM_LogoWidget::StaticRegisterNativesUGM_LogoWidget()
	{
	}
	UClass* Z_Construct_UClass_UGM_LogoWidget_NoRegister()
	{
		return UGM_LogoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGM_LogoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGM_LogoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGM_LogoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GM_LogoWidget.h" },
		{ "ModuleRelativePath", "Public/GM_LogoWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGM_LogoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGM_LogoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGM_LogoWidget_Statics::ClassParams = {
		&UGM_LogoWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGM_LogoWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGM_LogoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGM_LogoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGM_LogoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGM_LogoWidget, 1832521356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGM_LogoWidget(Z_Construct_UClass_UGM_LogoWidget, &UGM_LogoWidget::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UGM_LogoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGM_LogoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
