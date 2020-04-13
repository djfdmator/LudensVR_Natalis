// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_DiaryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_DiaryWidget() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_DiaryWidget_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_DiaryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void ULV_DiaryWidget::StaticRegisterNativesULV_DiaryWidget()
	{
		UClass* Class = ULV_DiaryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePaint", &ULV_DiaryWidget::execChangePaint },
			{ "Check1_Opacity", &ULV_DiaryWidget::execCheck1_Opacity },
			{ "Check2_Opacity", &ULV_DiaryWidget::execCheck2_Opacity },
			{ "ChildPaint_Opacity", &ULV_DiaryWidget::execChildPaint_Opacity },
			{ "Newspaper01_Opacity", &ULV_DiaryWidget::execNewspaper01_Opacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULV_DiaryWidget, "ChangePaint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics
	{
		struct LV_DiaryWidget_eventCheck1_Opacity_Parms
		{
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::NewProp_alpha = { UE4CodeGen_Private::EPropertyClass::Float, "alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_DiaryWidget_eventCheck1_Opacity_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULV_DiaryWidget, "Check1_Opacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_DiaryWidget_eventCheck1_Opacity_Parms), Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics
	{
		struct LV_DiaryWidget_eventCheck2_Opacity_Parms
		{
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::NewProp_alpha = { UE4CodeGen_Private::EPropertyClass::Float, "alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_DiaryWidget_eventCheck2_Opacity_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULV_DiaryWidget, "Check2_Opacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_DiaryWidget_eventCheck2_Opacity_Parms), Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics
	{
		struct LV_DiaryWidget_eventChildPaint_Opacity_Parms
		{
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::NewProp_alpha = { UE4CodeGen_Private::EPropertyClass::Float, "alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_DiaryWidget_eventChildPaint_Opacity_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULV_DiaryWidget, "ChildPaint_Opacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_DiaryWidget_eventChildPaint_Opacity_Parms), Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics
	{
		struct LV_DiaryWidget_eventNewspaper01_Opacity_Parms
		{
			float alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::NewProp_alpha = { UE4CodeGen_Private::EPropertyClass::Float, "alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_DiaryWidget_eventNewspaper01_Opacity_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::NewProp_alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULV_DiaryWidget, "Newspaper01_Opacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(LV_DiaryWidget_eventNewspaper01_Opacity_Parms), Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULV_DiaryWidget_NoRegister()
	{
		return ULV_DiaryWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULV_DiaryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sub_ChildPaint02_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sub_ChildPaint02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sub_ChildPaint01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sub_ChildPaint01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sub_Newspaper01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sub_Newspaper01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_ChildPaint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_ChildPaint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Newspaper01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Newspaper01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_RightArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_RightArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_LeftArrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_LeftArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Check02_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Check02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_Check01_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image_Check01;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULV_DiaryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULV_DiaryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULV_DiaryWidget_ChangePaint, "ChangePaint" }, // 237249074
		{ &Z_Construct_UFunction_ULV_DiaryWidget_Check1_Opacity, "Check1_Opacity" }, // 533821188
		{ &Z_Construct_UFunction_ULV_DiaryWidget_Check2_Opacity, "Check2_Opacity" }, // 3153668628
		{ &Z_Construct_UFunction_ULV_DiaryWidget_ChildPaint_Opacity, "ChildPaint_Opacity" }, // 342042786
		{ &Z_Construct_UFunction_ULV_DiaryWidget_Newspaper01_Opacity, "Newspaper01_Opacity" }, // 2020821982
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_DiaryWidget.h" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint02_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint02 = { UE4CodeGen_Private::EPropertyClass::Object, "Sub_ChildPaint02", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Sub_ChildPaint02), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint02_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint01_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint01 = { UE4CodeGen_Private::EPropertyClass::Object, "Sub_ChildPaint01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Sub_ChildPaint01), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint01_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_Newspaper01_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_Newspaper01 = { UE4CodeGen_Private::EPropertyClass::Object, "Sub_Newspaper01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Sub_Newspaper01), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_Newspaper01_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_Newspaper01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_ChildPaint_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_ChildPaint = { UE4CodeGen_Private::EPropertyClass::Object, "Image_ChildPaint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_ChildPaint), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_ChildPaint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_ChildPaint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Newspaper01_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Newspaper01 = { UE4CodeGen_Private::EPropertyClass::Object, "Image_Newspaper01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_Newspaper01), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Newspaper01_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Newspaper01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_RightArrow_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_RightArrow = { UE4CodeGen_Private::EPropertyClass::Object, "Image_RightArrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_RightArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_RightArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_RightArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_LeftArrow_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_LeftArrow = { UE4CodeGen_Private::EPropertyClass::Object, "Image_LeftArrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_LeftArrow), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_LeftArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_LeftArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check02_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check02 = { UE4CodeGen_Private::EPropertyClass::Object, "Image_Check02", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_Check02), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check02_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check01_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "LV_DiaryWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_DiaryWidget.h" },
		{ "ToolTip", "Optionally override the tick event\nvirtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check01 = { UE4CodeGen_Private::EPropertyClass::Object, "Image_Check01", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000c, 1, nullptr, STRUCT_OFFSET(ULV_DiaryWidget, Image_Check01), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check01_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check01_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULV_DiaryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_ChildPaint01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Sub_Newspaper01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_ChildPaint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Newspaper01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_RightArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_LeftArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULV_DiaryWidget_Statics::NewProp_Image_Check01,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULV_DiaryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULV_DiaryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULV_DiaryWidget_Statics::ClassParams = {
		&ULV_DiaryWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULV_DiaryWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULV_DiaryWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULV_DiaryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULV_DiaryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULV_DiaryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULV_DiaryWidget, 2629406895);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULV_DiaryWidget(Z_Construct_UClass_ULV_DiaryWidget, &ULV_DiaryWidget::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ULV_DiaryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULV_DiaryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
