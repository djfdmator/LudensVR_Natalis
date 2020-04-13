// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LUDENSVR_PROJECT_01_LV_Lantern_generated_h
#error "LV_Lantern.generated.h already included, missing '#pragma once' in LV_Lantern.h"
#endif
#define LUDENSVR_PROJECT_01_LV_Lantern_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLight_Switch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Light_Switch(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLight_Switch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Light_Switch(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_Lantern(); \
	friend struct Z_Construct_UClass_ALV_Lantern_Statics; \
public: \
	DECLARE_CLASS(ALV_Lantern, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Lantern) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_Lantern*>(this); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALV_Lantern(); \
	friend struct Z_Construct_UClass_ALV_Lantern_Statics; \
public: \
	DECLARE_CLASS(ALV_Lantern, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Lantern) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_Lantern*>(this); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_Lantern(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_Lantern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Lantern); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Lantern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Lantern(ALV_Lantern&&); \
	NO_API ALV_Lantern(const ALV_Lantern&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Lantern(ALV_Lantern&&); \
	NO_API ALV_Lantern(const ALV_Lantern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Lantern); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Lantern); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_Lantern)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LanternMesh() { return STRUCT_OFFSET(ALV_Lantern, LanternMesh); } \
	FORCEINLINE static uint32 __PPO__SpotLight() { return STRUCT_OFFSET(ALV_Lantern, SpotLight); } \
	FORCEINLINE static uint32 __PPO__SpotLightAssistant() { return STRUCT_OFFSET(ALV_Lantern, SpotLightAssistant); } \
	FORCEINLINE static uint32 __PPO__Light_Internsity() { return STRUCT_OFFSET(ALV_Lantern, Light_Internsity); } \
	FORCEINLINE static uint32 __PPO__Light_Color_R() { return STRUCT_OFFSET(ALV_Lantern, Light_Color_R); } \
	FORCEINLINE static uint32 __PPO__Light_Color_G() { return STRUCT_OFFSET(ALV_Lantern, Light_Color_G); } \
	FORCEINLINE static uint32 __PPO__Light_Color_B() { return STRUCT_OFFSET(ALV_Lantern, Light_Color_B); } \
	FORCEINLINE static uint32 __PPO__Light_Length() { return STRUCT_OFFSET(ALV_Lantern, Light_Length); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_10_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Lantern_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
