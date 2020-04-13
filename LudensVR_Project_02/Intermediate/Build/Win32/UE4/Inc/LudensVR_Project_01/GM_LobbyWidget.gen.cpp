// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/GM_LobbyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_LobbyWidget() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UGM_LobbyWidget_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UGM_LobbyWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UGM_LobbyWidget::StaticRegisterNativesUGM_LobbyWidget()
	{
		UClass* Class = UGM_LobbyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClick_QuitButton", &UGM_LobbyWidget::execOnClick_QuitButton },
			{ "OnClick_StartButton", &UGM_LobbyWidget::execOnClick_StartButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGM_LobbyWidget, "OnClick_QuitButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGM_LobbyWidget, "OnClick_StartButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGM_LobbyWidget_NoRegister()
	{
		return UGM_LobbyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGM_LobbyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_quitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_startButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGM_LobbyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGM_LobbyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGM_LobbyWidget_OnClick_QuitButton, "OnClick_QuitButton" }, // 3701054882
		{ &Z_Construct_UFunction_UGM_LobbyWidget_OnClick_StartButton, "OnClick_StartButton" }, // 2491139484
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGM_LobbyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GM_LobbyWidget.h" },
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_Image_1_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GM_LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_Image_1 = { UE4CodeGen_Private::EPropertyClass::Object, "Image_1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGM_LobbyWidget, Image_1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_Image_1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_Image_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_quitButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GM_LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_quitButton = { UE4CodeGen_Private::EPropertyClass::Object, "quitButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGM_LobbyWidget, quitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_quitButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_quitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_startButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "GM_LobbyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GM_LobbyWidget.h" },
		{ "ToolTip", "UGM_Lobby(const FObjectInitializer& ObjectInitializer);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_startButton = { UE4CodeGen_Private::EPropertyClass::Object, "startButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(UGM_LobbyWidget, startButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_startButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_startButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGM_LobbyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_Image_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_quitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGM_LobbyWidget_Statics::NewProp_startButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGM_LobbyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGM_LobbyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGM_LobbyWidget_Statics::ClassParams = {
		&UGM_LobbyWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGM_LobbyWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGM_LobbyWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGM_LobbyWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGM_LobbyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGM_LobbyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGM_LobbyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGM_LobbyWidget, 584132770);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGM_LobbyWidget(Z_Construct_UClass_UGM_LobbyWidget, &UGM_LobbyWidget::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UGM_LobbyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGM_LobbyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
