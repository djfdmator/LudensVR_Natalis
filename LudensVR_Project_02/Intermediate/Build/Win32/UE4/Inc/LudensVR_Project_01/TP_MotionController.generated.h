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
struct FVector;
struct FRotator;
#ifdef LUDENSVR_PROJECT_01_TP_MotionController_generated_h
#error "TP_MotionController.generated.h already included, missing '#pragma once' in TP_MotionController.h"
#endif
#define LUDENSVR_PROJECT_01_TP_MotionController_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTurnOffInteraction) \
	{ \
		P_GET_UBOOL(Z_Param__onOff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnOffInteraction(Z_Param__onOff); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraction_ReleasedPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaction_ReleasedPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraction_PressPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaction_PressPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantsToGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantsToGrip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHandAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHandAnimation(); \
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
	} \
 \
	DECLARE_FUNCTION(execRumbleController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RumbleController(Z_Param_Intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRoomScaleOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRoomScaleOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupRoomScaleOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupRoomScaleOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_MyRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTeleportDestination(Z_Param_Out_MyLocation,Z_Param_Out_MyRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateArcEndPoint) \
	{ \
		P_GET_UBOOL(Z_Param_ValidLocationFound); \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateArcEndPoint(Z_Param_ValidLocationFound,Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateArcSpline) \
	{ \
		P_GET_UBOOL(Z_Param_FoundValidLocation); \
		P_GET_TARRAY(FVector,Z_Param_SplinePoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateArcSpline(Z_Param_FoundValidLocation,Z_Param_SplinePoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearArc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceTeleportDestination) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_TracePoints); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NavMeshLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TraceTeleportDestination(Z_Param_Out_TracePoints,Z_Param_Out_NavMeshLocation,Z_Param_Out_TraceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabPen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabPen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActorLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabActorLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActorRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabActorRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTurnOffInteraction) \
	{ \
		P_GET_UBOOL(Z_Param__onOff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnOffInteraction(Z_Param__onOff); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraction_ReleasedPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaction_ReleasedPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteraction_PressPointer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interaction_PressPointer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantsToGrip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantsToGrip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHandAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHandAnimation(); \
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
	} \
 \
	DECLARE_FUNCTION(execRumbleController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RumbleController(Z_Param_Intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRoomScaleOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRoomScaleOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupRoomScaleOutline) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupRoomScaleOutline(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportDestination) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MyLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_MyRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTeleportDestination(Z_Param_Out_MyLocation,Z_Param_Out_MyRotation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateArcEndPoint) \
	{ \
		P_GET_UBOOL(Z_Param_ValidLocationFound); \
		P_GET_STRUCT(FVector,Z_Param_NewLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateArcEndPoint(Z_Param_ValidLocationFound,Z_Param_NewLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateArcSpline) \
	{ \
		P_GET_UBOOL(Z_Param_FoundValidLocation); \
		P_GET_TARRAY(FVector,Z_Param_SplinePoints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateArcSpline(Z_Param_FoundValidLocation,Z_Param_SplinePoints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearArc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTraceTeleportDestination) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_TracePoints); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NavMeshLocation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->TraceTeleportDestination(Z_Param_Out_TracePoints,Z_Param_Out_NavMeshLocation,Z_Param_Out_TraceLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivateTeleporter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActivateTeleporter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyPen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyPen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDestroyActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DestroyActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabPen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabPen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActorLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabActorLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActorRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabActorRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_MotionController(); \
	friend struct Z_Construct_UClass_ATP_MotionController_Statics; \
public: \
	DECLARE_CLASS(ATP_MotionController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_MotionController)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesATP_MotionController(); \
	friend struct Z_Construct_UClass_ATP_MotionController_Statics; \
public: \
	DECLARE_CLASS(ATP_MotionController, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ATP_MotionController)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_MotionController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_MotionController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_MotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_MotionController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_MotionController(ATP_MotionController&&); \
	NO_API ATP_MotionController(const ATP_MotionController&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_MotionController(ATP_MotionController&&); \
	NO_API ATP_MotionController(const ATP_MotionController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_MotionController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_MotionController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_MotionController)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ATP_MotionController, RootScene); } \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(ATP_MotionController, MotionController); } \
	FORCEINLINE static uint32 __PPO__HandMesh() { return STRUCT_OFFSET(ATP_MotionController, HandMesh); } \
	FORCEINLINE static uint32 __PPO__ArcDirection() { return STRUCT_OFFSET(ATP_MotionController, ArcDirection); } \
	FORCEINLINE static uint32 __PPO__ArcSpline() { return STRUCT_OFFSET(ATP_MotionController, ArcSpline); } \
	FORCEINLINE static uint32 __PPO__GrabShpere() { return STRUCT_OFFSET(ATP_MotionController, GrabShpere); } \
	FORCEINLINE static uint32 __PPO__ArcEndPoint() { return STRUCT_OFFSET(ATP_MotionController, ArcEndPoint); } \
	FORCEINLINE static uint32 __PPO__TeleportCylinder() { return STRUCT_OFFSET(ATP_MotionController, TeleportCylinder); } \
	FORCEINLINE static uint32 __PPO__Ring() { return STRUCT_OFFSET(ATP_MotionController, Ring); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(ATP_MotionController, Arrow); } \
	FORCEINLINE static uint32 __PPO__RoomScaleMesh() { return STRUCT_OFFSET(ATP_MotionController, RoomScaleMesh); } \
	FORCEINLINE static uint32 __PPO__SteamVRChaperone() { return STRUCT_OFFSET(ATP_MotionController, SteamVRChaperone); } \
	FORCEINLINE static uint32 __PPO__CurrentGripState() { return STRUCT_OFFSET(ATP_MotionController, CurrentGripState); } \
	FORCEINLINE static uint32 __PPO__CurrentGripObject() { return STRUCT_OFFSET(ATP_MotionController, CurrentGripObject); } \
	FORCEINLINE static uint32 __PPO__bIsTeleporterActive() { return STRUCT_OFFSET(ATP_MotionController, bIsTeleporterActive); } \
	FORCEINLINE static uint32 __PPO__SplineMeshes() { return STRUCT_OFFSET(ATP_MotionController, SplineMeshes); } \
	FORCEINLINE static uint32 __PPO__bLastFrameValidDestination() { return STRUCT_OFFSET(ATP_MotionController, bLastFrameValidDestination); } \
	FORCEINLINE static uint32 __PPO__bIsRoomScale() { return STRUCT_OFFSET(ATP_MotionController, bIsRoomScale); } \
	FORCEINLINE static uint32 __PPO__TeleportDestination() { return STRUCT_OFFSET(ATP_MotionController, TeleportDestination); } \
	FORCEINLINE static uint32 __PPO__bIsValidTeleportDestination() { return STRUCT_OFFSET(ATP_MotionController, bIsValidTeleportDestination); } \
	FORCEINLINE static uint32 __PPO__bWantsToGrip() { return STRUCT_OFFSET(ATP_MotionController, bWantsToGrip); } \
	FORCEINLINE static uint32 __PPO__TeleportRotation() { return STRUCT_OFFSET(ATP_MotionController, TeleportRotation); } \
	FORCEINLINE static uint32 __PPO__TeleportLaunchVelocity() { return STRUCT_OFFSET(ATP_MotionController, TeleportLaunchVelocity); } \
	FORCEINLINE static uint32 __PPO__InitialControllerRotation() { return STRUCT_OFFSET(ATP_MotionController, InitialControllerRotation); } \
	FORCEINLINE static uint32 __PPO__VRHapticEffect() { return STRUCT_OFFSET(ATP_MotionController, VRHapticEffect); } \
	FORCEINLINE static uint32 __PPO__BeamMesh() { return STRUCT_OFFSET(ATP_MotionController, BeamMesh); } \
	FORCEINLINE static uint32 __PPO__BeamMaterial() { return STRUCT_OFFSET(ATP_MotionController, BeamMaterial); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_14_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_TP_MotionController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
