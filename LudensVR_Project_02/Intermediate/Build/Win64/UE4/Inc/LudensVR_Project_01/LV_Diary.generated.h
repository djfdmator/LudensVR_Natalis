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
#ifdef LUDENSVR_PROJECT_01_LV_Diary_generated_h
#error "LV_Diary.generated.h already included, missing '#pragma once' in LV_Diary.h"
#endif
#define LUDENSVR_PROJECT_01_LV_Diary_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
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
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollisionMenuEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_IsMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollisionMenuEnabled(Z_Param_IsMenu); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
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
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollisionMenuEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_IsMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollisionMenuEnabled(Z_Param_IsMenu); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALV_Diary(); \
	friend struct Z_Construct_UClass_ALV_Diary_Statics; \
public: \
	DECLARE_CLASS(ALV_Diary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Diary) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_Diary*>(this); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesALV_Diary(); \
	friend struct Z_Construct_UClass_ALV_Diary_Statics; \
public: \
	DECLARE_CLASS(ALV_Diary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), NO_API) \
	DECLARE_SERIALIZER(ALV_Diary) \
	virtual UObject* _getUObject() const override { return const_cast<ALV_Diary*>(this); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALV_Diary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALV_Diary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Diary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Diary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Diary(ALV_Diary&&); \
	NO_API ALV_Diary(const ALV_Diary&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALV_Diary(ALV_Diary&&); \
	NO_API ALV_Diary(const ALV_Diary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALV_Diary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALV_Diary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALV_Diary)


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetLeft() { return STRUCT_OFFSET(ALV_Diary, WidgetLeft); } \
	FORCEINLINE static uint32 __PPO__WidgetRight() { return STRUCT_OFFSET(ALV_Diary, WidgetRight); } \
	FORCEINLINE static uint32 __PPO__WidgetMenu_G_Q() { return STRUCT_OFFSET(ALV_Diary, WidgetMenu_G_Q); } \
	FORCEINLINE static uint32 __PPO__SkeletalMesh() { return STRUCT_OFFSET(ALV_Diary, SkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__Anim() { return STRUCT_OFFSET(ALV_Diary, Anim); } \
	FORCEINLINE static uint32 __PPO__AnimReverse() { return STRUCT_OFFSET(ALV_Diary, AnimReverse); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_G() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_G); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_Q() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_Q); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_YES() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_YES); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_NO() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_NO); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_Before() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_Before); } \
	FORCEINLINE static uint32 __PPO__BoxCollider_Next() { return STRUCT_OFFSET(ALV_Diary, BoxCollider_Next); } \
	FORCEINLINE static uint32 __PPO__IsWidget() { return STRUCT_OFFSET(ALV_Diary, IsWidget); } \
	FORCEINLINE static uint32 __PPO__OnOverlapButton() { return STRUCT_OFFSET(ALV_Diary, OnOverlapButton); } \
	FORCEINLINE static uint32 __PPO__OnOvertimeButton() { return STRUCT_OFFSET(ALV_Diary, OnOvertimeButton); } \
	FORCEINLINE static uint32 __PPO__PageNumber() { return STRUCT_OFFSET(ALV_Diary, PageNumber); } \
	FORCEINLINE static uint32 __PPO__DiaryPage() { return STRUCT_OFFSET(ALV_Diary, DiaryPage); } \
	FORCEINLINE static uint32 __PPO__ButtonEnum() { return STRUCT_OFFSET(ALV_Diary, ButtonEnum); }


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_27_PROLOG
#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_INCLASS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_PRIVATE_PROPERTY_OFFSET \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_INCLASS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_Public_LV_Diary_h


#define FOREACH_ENUM_EDIARYPAGE(op) \
	op(EDIARYPAGE::PAGE_GOTOSTART) \
	op(EDIARYPAGE::PAGE_QUIT) \
	op(EDIARYPAGE::PAGE_MENU) \
	op(EDIARYPAGE::PAGE_2) \
	op(EDIARYPAGE::PAGE_3) \
	op(EDIARYPAGE::PAGE_4) \
	op(EDIARYPAGE::PAGE_5) \
	op(EDIARYPAGE::PAGE_6) \
	op(EDIARYPAGE::PAGE_7) \
	op(EDIARYPAGE::PAGE_8) 
#define FOREACH_ENUM_EBUTTONENUM(op) \
	op(EButtonEnum::BE_Go) \
	op(EButtonEnum::BE_Quit) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
