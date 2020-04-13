// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATP_MotionController;
struct FRotator;
#ifdef LUDENSVR_PROJECT_01_LV_VirtualRealityCharacter_generated_h
#error "LV_VirtualRealityCharacter.generated.h already included, missing '#pragma once' in LV_VirtualRealityCharacter.h"
#endif
#define LUDENSVR_PROJECT_01_LV_VirtualRealityCharacter_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_RPC_WRAPPERS \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_VirtualRealityCharacter(); \
	friend struct Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics; \
public: \
	DECLARE_CLASS(ALV_VirtualRealityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_VirtualRealityCharacter)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALV_VirtualRealityCharacter(); \
	friend struct Z_Construct_UClass_ALV_VirtualRealityCharacter_Statics; \
public: \
	DECLARE_CLASS(ALV_VirtualRealityCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_VirtualRealityCharacter)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_VirtualRealityCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_VirtualRealityCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_VirtualRealityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_VirtualRealityCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_VirtualRealityCharacter(ALV_VirtualRealityCharacter&&); \
	NO_API ALV_VirtualRealityCharacter(const ALV_VirtualRealityCharacter&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_VirtualRealityCharacter(ALV_VirtualRealityCharacter&&); \
	NO_API ALV_VirtualRealityCharacter(const ALV_VirtualRealityCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_VirtualRealityCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_VirtualRealityCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_VirtualRealityCharacter)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, RootScene); } \
	FORCEINLINE static uint32 __PPO__CameraBase() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, CameraBase); } \
	FORCEINLINE static uint32 __PPO__VRCamera() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, VRCamera); } \
	FORCEINLINE static uint32 __PPO__VRCameraBase() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, VRCameraBase); } \
	FORCEINLINE static uint32 __PPO__BoundaryComponent() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, BoundaryComponent); } \
	FORCEINLINE static uint32 __PPO__LeftController() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, LeftController); } \
	FORCEINLINE static uint32 __PPO__RightController() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, RightController); } \
	FORCEINLINE static uint32 __PPO__FadeOutDuration() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, FadeOutDuration); } \
	FORCEINLINE static uint32 __PPO__FadeInDuration() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, FadeInDuration); } \
	FORCEINLINE static uint32 __PPO__bIsTeleporting() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, bIsTeleporting); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeColor() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, TeleportFadeColor); } \
	FORCEINLINE static uint32 __PPO__ThumbDeadzone() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, ThumbDeadzone); } \
	FORCEINLINE static uint32 __PPO__bRightStickDown() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, bRightStickDown); } \
	FORCEINLINE static uint32 __PPO__bLeftStickDown() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, bLeftStickDown); } \
	FORCEINLINE static uint32 __PPO__DefaultPlayerHeight() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, DefaultPlayerHeight); } \
	FORCEINLINE static uint32 __PPO__bUseControllerRollToRotate() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, bUseControllerRollToRotate); } \
	FORCEINLINE static uint32 __PPO__HolderSpawn() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, HolderSpawn); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__Sound_Walking() { return STRUCT_OFFSET(ALV_VirtualRealityCharacter, Sound_Walking); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_13_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_VirtualRealityCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
