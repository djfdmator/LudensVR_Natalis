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
#ifdef LUDENSVR_PROJECT_01_LV_Door_generated_h
#error "LV_Door.generated.h already included, missing '#pragma once' in LV_Door.h"
#endif
#define LUDENSVR_PROJECT_01_LV_Door_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFollowingCurrentRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FollowingCurrentRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rotate_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentRotation(Z_Param_rotate_Yaw,Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDoorSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDoorSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizationDoorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NormalizationDoorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenCloseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDoorDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDoorDirection(); \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFollowingCurrentRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FollowingCurrentRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentRotation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_rotate_Yaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentRotation(Z_Param_rotate_Yaw,Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDoorSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDoorSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNormalizationDoorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NormalizationDoorLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenCloseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDoorDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDoorDirection(); \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_Door(); \
	friend struct Z_Construct_UClass_ALV_Door_Statics; \
public: \
	DECLARE_CLASS(ALV_Door, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Door)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALV_Door(); \
	friend struct Z_Construct_UClass_ALV_Door_Statics; \
public: \
	DECLARE_CLASS(ALV_Door, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Door)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_Door(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_Door) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Door); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Door(ALV_Door&&); \
	NO_API ALV_Door(const ALV_Door&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Door(ALV_Door&&); \
	NO_API ALV_Door(const ALV_Door&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Door); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Door); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_Door)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__KnobMesh() { return STRUCT_OFFSET(ALV_Door, KnobMesh); } \
	FORCEINLINE static uint32 __PPO__DoorFrameMesh() { return STRUCT_OFFSET(ALV_Door, DoorFrameMesh); } \
	FORCEINLINE static uint32 __PPO__WallFrame() { return STRUCT_OFFSET(ALV_Door, WallFrame); } \
	FORCEINLINE static uint32 __PPO__DoorMesh() { return STRUCT_OFFSET(ALV_Door, DoorMesh); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_Wall() { return STRUCT_OFFSET(ALV_Door, BoxCollider_Wall); } \
	FORCEINLINE static uint32 __PPO__Hand() { return STRUCT_OFFSET(ALV_Door, Hand); } \
	FORCEINLINE static uint32 __PPO__GrapedKnob() { return STRUCT_OFFSET(ALV_Door, GrapedKnob); } \
	FORCEINLINE static uint32 __PPO__HandMesh() { return STRUCT_OFFSET(ALV_Door, HandMesh); } \
	FORCEINLINE static uint32 __PPO__CloseSound() { return STRUCT_OFFSET(ALV_Door, CloseSound); } \
	FORCEINLINE static uint32 __PPO__OpenSound() { return STRUCT_OFFSET(ALV_Door, OpenSound); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ALV_Door, AudioComponent); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_9_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_Object_LV_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
