// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LUDENSVR_PROJECT_01_LV_Stair_generated_h
#error "LV_Stair.generated.h already included, missing '#pragma once' in LV_Stair.h"
#endif
#define LUDENSVR_PROJECT_01_LV_Stair_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetisStair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisStair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetisStair) \
	{ \
		P_GET_UBOOL(Z_Param__isStair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetisStair(Z_Param__isStair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetisStair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetisStair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetisStair) \
	{ \
		P_GET_UBOOL(Z_Param__isStair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetisStair(Z_Param__isStair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_Stair(); \
	friend struct Z_Construct_UClass_ALV_Stair_Statics; \
public: \
	DECLARE_CLASS(ALV_Stair, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Stair)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALV_Stair(); \
	friend struct Z_Construct_UClass_ALV_Stair_Statics; \
public: \
	DECLARE_CLASS(ALV_Stair, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Stair)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_Stair(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_Stair) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Stair); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Stair); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Stair(ALV_Stair&&); \
	NO_API ALV_Stair(const ALV_Stair&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Stair(ALV_Stair&&); \
	NO_API ALV_Stair(const ALV_Stair&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Stair); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Stair); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_Stair)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Trigger_Stair() { return STRUCT_OFFSET(ALV_Stair, Trigger_Stair); } \
	FORCEINLINE static uint32 __PPO__isStair() { return STRUCT_OFFSET(ALV_Stair, isStair); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_10_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Stair_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
