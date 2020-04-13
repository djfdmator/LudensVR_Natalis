// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGrip_Object : uint8;
enum class EGrip_Code : uint8;
#ifdef LUDENSVR_PROJECT_01_TP_HandAnimInstance_generated_h
#error "TP_HandAnimInstance.generated.h already included, missing '#pragma once' in TP_HandAnimInstance.h"
#endif
#define LUDENSVR_PROJECT_01_TP_HandAnimInstance_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGripObject) \
	{ \
		P_GET_ENUM(EGrip_Object,Z_Param_GripObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripObject(EGrip_Object(Z_Param_GripObject)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripState) \
	{ \
		P_GET_ENUM(EGrip_Code,Z_Param_GripState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripState(EGrip_Code(Z_Param_GripState)); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGripObject) \
	{ \
		P_GET_ENUM(EGrip_Object,Z_Param_GripObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripObject(EGrip_Object(Z_Param_GripObject)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripState) \
	{ \
		P_GET_ENUM(EGrip_Code,Z_Param_GripState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGripState(EGrip_Code(Z_Param_GripState)); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_HandAnimInstance(); \
	friend struct Z_Construct_UClass_UTP_HandAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTP_HandAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(UTP_HandAnimInstance)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTP_HandAnimInstance(); \
	friend struct Z_Construct_UClass_UTP_HandAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTP_HandAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(UTP_HandAnimInstance)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTP_HandAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_HandAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_HandAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_HandAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_HandAnimInstance(UTP_HandAnimInstance&&); \
	NO_API UTP_HandAnimInstance(const UTP_HandAnimInstance&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_HandAnimInstance(UTP_HandAnimInstance&&); \
	NO_API UTP_HandAnimInstance(const UTP_HandAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_HandAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_HandAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_HandAnimInstance)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentGripState() { return STRUCT_OFFSET(UTP_HandAnimInstance, CurrentGripState); } \
	FORCEINLINE static uint32 __PPO__CurrentGripObject() { return STRUCT_OFFSET(UTP_HandAnimInstance, CurrentGripObject); } \
	FORCEINLINE static uint32 __PPO__IsLantern() { return STRUCT_OFFSET(UTP_HandAnimInstance, IsLantern); } \
	FORCEINLINE static uint32 __PPO__IsDiary() { return STRUCT_OFFSET(UTP_HandAnimInstance, IsDiary); } \
	FORCEINLINE static uint32 __PPO__IsPen() { return STRUCT_OFFSET(UTP_HandAnimInstance, IsPen); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_17_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_TP_HandAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
