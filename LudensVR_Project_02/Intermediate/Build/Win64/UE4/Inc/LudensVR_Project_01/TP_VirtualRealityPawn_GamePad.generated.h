// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef LUDENSVR_PROJECT_01_TP_VirtualRealityPawn_GamePad_generated_h
#error "TP_VirtualRealityPawn_GamePad.generated.h already included, missing '#pragma once' in TP_VirtualRealityPawn_GamePad.h"
#endif
#define LUDENSVR_PROJECT_01_TP_VirtualRealityPawn_GamePad_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTeleportDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTeleportDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThumbstickFacingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetThumbstickFacingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldUpdateFacingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldUpdateFacingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTeleportDestination(Z_Param_Out_MyLocation,Z_Param_Out_HitNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportActor(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTeleportDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateTeleportDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThumbstickFacingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetThumbstickFacingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldUpdateFacingDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldUpdateFacingDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTeleportDestination(Z_Param_Out_MyLocation,Z_Param_Out_HitNormal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TeleportActor(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_VirtualRealityPawn_GamePad(); \
	friend struct Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics; \
public: \
	DECLARE_CLASS(ATP_VirtualRealityPawn_GamePad, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_VirtualRealityPawn_GamePad)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATP_VirtualRealityPawn_GamePad(); \
	friend struct Z_Construct_UClass_ATP_VirtualRealityPawn_GamePad_Statics; \
public: \
	DECLARE_CLASS(ATP_VirtualRealityPawn_GamePad, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_VirtualRealityPawn_GamePad)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_VirtualRealityPawn_GamePad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_VirtualRealityPawn_GamePad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VirtualRealityPawn_GamePad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VirtualRealityPawn_GamePad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VirtualRealityPawn_GamePad(ATP_VirtualRealityPawn_GamePad&&); \
	NO_API ATP_VirtualRealityPawn_GamePad(const ATP_VirtualRealityPawn_GamePad&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_VirtualRealityPawn_GamePad(ATP_VirtualRealityPawn_GamePad&&); \
	NO_API ATP_VirtualRealityPawn_GamePad(const ATP_VirtualRealityPawn_GamePad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_VirtualRealityPawn_GamePad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_VirtualRealityPawn_GamePad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_VirtualRealityPawn_GamePad)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RootScene); } \
	FORCEINLINE static uint32 __PPO__CameraBase() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, CameraBase); } \
	FORCEINLINE static uint32 __PPO__VRCamera() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, VRCamera); } \
	FORCEINLINE static uint32 __PPO__TraceDirection() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TraceDirection); } \
	FORCEINLINE static uint32 __PPO__TeleportPin() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TeleportPin); } \
	FORCEINLINE static uint32 __PPO__Ring() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, Ring); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, Arrow); } \
	FORCEINLINE static uint32 __PPO__PinnedLocation() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, PinnedLocation); } \
	FORCEINLINE static uint32 __PPO__bLocationFound() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, bLocationFound); } \
	FORCEINLINE static uint32 __PPO__bLocationPinned() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, bLocationPinned); } \
	FORCEINLINE static uint32 __PPO__PinnedRotation() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, PinnedRotation); } \
	FORCEINLINE static uint32 __PPO__RotationLengthThreshold() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RotationLengthThreshold); } \
	FORCEINLINE static uint32 __PPO__CurrentLookAtLocation() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, CurrentLookAtLocation); } \
	FORCEINLINE static uint32 __PPO__bCurrentLocationValid() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, bCurrentLocationValid); } \
	FORCEINLINE static uint32 __PPO__FadeOutDuration() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, FadeOutDuration); } \
	FORCEINLINE static uint32 __PPO__FadeInDuration() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, FadeInDuration); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeColor() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, TeleportFadeColor); } \
	FORCEINLINE static uint32 __PPO__DefaultPlayerHeight() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, DefaultPlayerHeight); } \
	FORCEINLINE static uint32 __PPO__RingGlowMatInst() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, RingGlowMatInst); } \
	FORCEINLINE static uint32 __PPO__bUseGamepad() { return STRUCT_OFFSET(ATP_VirtualRealityPawn_GamePad, bUseGamepad); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_13_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_TP_VirtualRealityPawn_GamePad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
