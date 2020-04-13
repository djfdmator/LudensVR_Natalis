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
class ATP_MotionController;
struct FRotator;
#ifdef LUDENSVR_PROJECT_01_TP_VirtualRealityPawn_Motion_generated_h
#error "TP_VirtualRealityPawn_Motion.generated.h already included, missing '#pragma once' in TP_VirtualRealityPawn_Motion.h"
#endif
#define LUDENSVR_PROJECT_01_TP_VirtualRealityPawn_Motion_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WidgetReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WidgetPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLight_Switch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Light_Switch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportActor) \
	{ \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportActor(Z_Param_MotionController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteTeleportation) \
	{ \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteTeleportation(Z_Param_MotionController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationFromInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightAxis); \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationFromInput(Z_Param_UpAxis,Z_Param_RightAxis,Z_Param_MotionController); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapsuleBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CapsuleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetReleased) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WidgetReleased(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWidgetPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WidgetPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLight_Switch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Light_Switch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportActor) \
	{ \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportActor(Z_Param_MotionController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteTeleportation) \
	{ \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteTeleportation(Z_Param_MotionController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotationFromInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UpAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RightAxis); \
		P_GET_OBJECT(ATP_MotionController,Z_Param_MotionController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRotationFromInput(Z_Param_UpAxis,Z_Param_RightAxis,Z_Param_MotionController); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_VirtualRealityPawn_Motion(); \
	friend struct Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics; \
public: \
	DECLARE_CLASS(ATP_VirtualRealityPawn_Motion, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_VirtualRealityPawn_Motion)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATP_VirtualRealityPawn_Motion(); \
	friend struct Z_Construct_UClass_ATP_VirtualRealityPawn_Motion_Statics; \
public: \
	DECLARE_CLASS(ATP_VirtualRealityPawn_Motion, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_VirtualRealityPawn_Motion)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_VirtualRealityPawn_Motion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_VirtualRealityPawn_Motion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VirtualRealityPawn_Motion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VirtualRealityPawn_Motion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VirtualRealityPawn_Motion(ATP_VirtualRealityPawn_Motion&&); \
	NO_API ATP_VirtualRealityPawn_Motion(const ATP_VirtualRealityPawn_Motion&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VirtualRealityPawn_Motion(ATP_VirtualRealityPawn_Motion&&); \
	NO_API ATP_VirtualRealityPawn_Motion(const ATP_VirtualRealityPawn_Motion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VirtualRealityPawn_Motion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VirtualRealityPawn_Motion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_VirtualRealityPawn_Motion)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RootScene); } \
	FORCEINLINE static uint32 __PPO__CameraBase() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, CameraBase); } \
	FORCEINLINE static uint32 __PPO__VRCamera() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, VRCamera); } \
	FORCEINLINE static uint32 __PPO__LeftController() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, LeftController); } \
	FORCEINLINE static uint32 __PPO__RightController() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, RightController); } \
	FORCEINLINE static uint32 __PPO__FadeOutDuration() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeOutDuration); } \
	FORCEINLINE static uint32 __PPO__FadeInDuration() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, FadeInDuration); } \
	FORCEINLINE static uint32 __PPO__bIsTeleporting() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, bIsTeleporting); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeColor() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, TeleportFadeColor); } \
	FORCEINLINE static uint32 __PPO__ThumbDeadzone() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, ThumbDeadzone); } \
	FORCEINLINE static uint32 __PPO__bRightStickDown() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, bRightStickDown); } \
	FORCEINLINE static uint32 __PPO__bLeftStickDown() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, bLeftStickDown); } \
	FORCEINLINE static uint32 __PPO__DefaultPlayerHeight() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, DefaultPlayerHeight); } \
	FORCEINLINE static uint32 __PPO__bUseControllerRollToRotate() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, bUseControllerRollToRotate); } \
	FORCEINLINE static uint32 __PPO__HolderSpawn() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, HolderSpawn); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__Sound_Walking() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Sound_Walking); } \
	FORCEINLINE static uint32 __PPO__StairTrigger() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, StairTrigger); } \
	FORCEINLINE static uint32 __PPO__Door1_2() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door1_2); } \
	FORCEINLINE static uint32 __PPO__Door_1() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door_1); } \
	FORCEINLINE static uint32 __PPO__Door4() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door4); } \
	FORCEINLINE static uint32 __PPO__Door5() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door5); } \
	FORCEINLINE static uint32 __PPO__Door6() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door6); } \
	FORCEINLINE static uint32 __PPO__Door8() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door8); } \
	FORCEINLINE static uint32 __PPO__Door10() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_Motion, Door10); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_18_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_Motion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
