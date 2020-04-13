// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDENSVR_PROJECT_01_LV_DiaryWidget_generated_h
#error "LV_DiaryWidget.generated.h already included, missing '#pragma once' in LV_DiaryWidget.h"
#endif
#define LUDENSVR_PROJECT_01_LV_DiaryWidget_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangePaint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePaint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildPaint_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChildPaint_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewspaper01_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Newspaper01_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck2_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Check2_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck1_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Check1_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangePaint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePaint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildPaint_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChildPaint_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNewspaper01_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Newspaper01_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck2_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Check2_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheck1_Opacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_alpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Check1_Opacity(Z_Param_alpha); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULV_DiaryWidget(); \
	friend struct Z_Construct_UClass_ULV_DiaryWidget_Statics; \
public: \
	DECLARE_CLASS(ULV_DiaryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ULV_DiaryWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULV_DiaryWidget(); \
	friend struct Z_Construct_UClass_ULV_DiaryWidget_Statics; \
public: \
	DECLARE_CLASS(ULV_DiaryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ULV_DiaryWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULV_DiaryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULV_DiaryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULV_DiaryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULV_DiaryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULV_DiaryWidget(ULV_DiaryWidget&&); \
	NO_API ULV_DiaryWidget(const ULV_DiaryWidget&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULV_DiaryWidget(ULV_DiaryWidget&&); \
	NO_API ULV_DiaryWidget(const ULV_DiaryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULV_DiaryWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULV_DiaryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULV_DiaryWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_13_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_DiaryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
