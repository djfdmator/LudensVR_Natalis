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
#ifdef LUDENSVR_PROJECT_01_LV_Event_generated_h
#error "LV_Event.generated.h already included, missing '#pragma once' in LV_Event.h"
#endif
#define LUDENSVR_PROJECT_01_LV_Event_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Outro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMannequinAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MannequinAnimation(); \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOutro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Outro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMannequinAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MannequinAnimation(); \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_Event(); \
	friend struct Z_Construct_UClass_ALV_Event_Statics; \
public: \
	DECLARE_CLASS(ALV_Event, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Event)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_INCLASS \
private: \
	static void StaticRegisterNativesALV_Event(); \
	friend struct Z_Construct_UClass_ALV_Event_Statics; \
public: \
	DECLARE_CLASS(ALV_Event, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Event)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_Event(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_Event) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Event); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Event); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Event(ALV_Event&&); \
	NO_API ALV_Event(const ALV_Event&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Event(ALV_Event&&); \
	NO_API ALV_Event(const ALV_Event&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Event); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Event); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_Event)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EventManager() { return STRUCT_OFFSET(ALV_Event, EventManager); } \
	FORCEINLINE static uint32 __PPO__manne() { return STRUCT_OFFSET(ALV_Event, manne); } \
	FORCEINLINE static uint32 __PPO__Logo() { return STRUCT_OFFSET(ALV_Event, Logo); } \
	FORCEINLINE static uint32 __PPO__Door_Event0() { return STRUCT_OFFSET(ALV_Event, Door_Event0); } \
	FORCEINLINE static uint32 __PPO__Door_Event1() { return STRUCT_OFFSET(ALV_Event, Door_Event1); } \
	FORCEINLINE static uint32 __PPO__Door_Event2() { return STRUCT_OFFSET(ALV_Event, Door_Event2); } \
	FORCEINLINE static uint32 __PPO__Door_Event3() { return STRUCT_OFFSET(ALV_Event, Door_Event3); } \
	FORCEINLINE static uint32 __PPO__Door_Event4() { return STRUCT_OFFSET(ALV_Event, Door_Event4); } \
	FORCEINLINE static uint32 __PPO__Door_Event5() { return STRUCT_OFFSET(ALV_Event, Door_Event5); } \
	FORCEINLINE static uint32 __PPO__Door_Event6() { return STRUCT_OFFSET(ALV_Event, Door_Event6); } \
	FORCEINLINE static uint32 __PPO__Wall_1_1() { return STRUCT_OFFSET(ALV_Event, Wall_1_1); } \
	FORCEINLINE static uint32 __PPO__Wall_1_2() { return STRUCT_OFFSET(ALV_Event, Wall_1_2); } \
	FORCEINLINE static uint32 __PPO__Wall_2_1() { return STRUCT_OFFSET(ALV_Event, Wall_2_1); } \
	FORCEINLINE static uint32 __PPO__Wall_2_2() { return STRUCT_OFFSET(ALV_Event, Wall_2_2); } \
	FORCEINLINE static uint32 __PPO__Wall_2_3() { return STRUCT_OFFSET(ALV_Event, Wall_2_3); } \
	FORCEINLINE static uint32 __PPO__Wall_2_4() { return STRUCT_OFFSET(ALV_Event, Wall_2_4); } \
	FORCEINLINE static uint32 __PPO__Wall_3_1() { return STRUCT_OFFSET(ALV_Event, Wall_3_1); } \
	FORCEINLINE static uint32 __PPO__Wall_3_2() { return STRUCT_OFFSET(ALV_Event, Wall_3_2); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event_Start() { return STRUCT_OFFSET(ALV_Event, Trigger_Event_Start); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event0() { return STRUCT_OFFSET(ALV_Event, Trigger_Event0); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event1() { return STRUCT_OFFSET(ALV_Event, Trigger_Event1); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event2() { return STRUCT_OFFSET(ALV_Event, Trigger_Event2); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event3() { return STRUCT_OFFSET(ALV_Event, Trigger_Event3); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event4() { return STRUCT_OFFSET(ALV_Event, Trigger_Event4); } \
	FORCEINLINE static uint32 __PPO__Trigger_Event_End() { return STRUCT_OFFSET(ALV_Event, Trigger_Event_End); } \
	FORCEINLINE static uint32 __PPO__Sound_Event_Start_OpenDoor() { return STRUCT_OFFSET(ALV_Event, Sound_Event_Start_OpenDoor); } \
	FORCEINLINE static uint32 __PPO__Sound_Event_Start_CloseDoor() { return STRUCT_OFFSET(ALV_Event, Sound_Event_Start_CloseDoor); } \
	FORCEINLINE static uint32 __PPO__Sound_Child_Laughing() { return STRUCT_OFFSET(ALV_Event, Sound_Child_Laughing); } \
	FORCEINLINE static uint32 __PPO__Sound_Lightbulb_Broken() { return STRUCT_OFFSET(ALV_Event, Sound_Lightbulb_Broken); } \
	FORCEINLINE static uint32 __PPO__Sound_Open_Door() { return STRUCT_OFFSET(ALV_Event, Sound_Open_Door); } \
	FORCEINLINE static uint32 __PPO__Sound_BGM_Horror5() { return STRUCT_OFFSET(ALV_Event, Sound_BGM_Horror5); } \
	FORCEINLINE static uint32 __PPO__Sound_BGM_Horror4() { return STRUCT_OFFSET(ALV_Event, Sound_BGM_Horror4); } \
	FORCEINLINE static uint32 __PPO__AudioComponent1() { return STRUCT_OFFSET(ALV_Event, AudioComponent1); } \
	FORCEINLINE static uint32 __PPO__AudioComponent2() { return STRUCT_OFFSET(ALV_Event, AudioComponent2); } \
	FORCEINLINE static uint32 __PPO__BGM_AudioComponent() { return STRUCT_OFFSET(ALV_Event, BGM_AudioComponent); } \
	FORCEINLINE static uint32 __PPO__eventIndex() { return STRUCT_OFFSET(ALV_Event, eventIndex); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_25_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Event_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
