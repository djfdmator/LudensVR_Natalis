// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDENSVR_PROJECT_01_GM_LobbyWidget_generated_h
#error "GM_LobbyWidget.generated.h already included, missing '#pragma once' in GM_LobbyWidget.h"
#endif
#define LUDENSVR_PROJECT_01_GM_LobbyWidget_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnClick_StartButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClick_StartButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClick_QuitButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClick_QuitButton(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnClick_StartButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClick_StartButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClick_QuitButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClick_QuitButton(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGM_LobbyWidget(); \
	friend struct Z_Construct_UClass_UGM_LobbyWidget_Statics; \
public: \
	DECLARE_CLASS(UGM_LobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(UGM_LobbyWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGM_LobbyWidget(); \
	friend struct Z_Construct_UClass_UGM_LobbyWidget_Statics; \
public: \
	DECLARE_CLASS(UGM_LobbyWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(UGM_LobbyWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGM_LobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGM_LobbyWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGM_LobbyWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGM_LobbyWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGM_LobbyWidget(UGM_LobbyWidget&&); \
	NO_API UGM_LobbyWidget(const UGM_LobbyWidget&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGM_LobbyWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGM_LobbyWidget(UGM_LobbyWidget&&); \
	NO_API UGM_LobbyWidget(const UGM_LobbyWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGM_LobbyWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGM_LobbyWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGM_LobbyWidget)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_PRIVATE_PROPERTY_OFFSET
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_13_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_GM_LobbyWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
