// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef LUDENSVR_PROJECT_01_TP_InteractionInterface_generated_h
#error "TP_InteractionInterface.generated.h already included, missing '#pragma once' in TP_InteractionInterface.h"
#endif
#define LUDENSVR_PROJECT_01_TP_InteractionInterface_generated_h

#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_RPC_WRAPPERS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_EVENT_PARMS \
	struct TP_InteractionInterface_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_CALLBACK_WRAPPERS
#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_InteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LUDENSVR_PROJECT_01_API, UTP_InteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_InteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(UTP_InteractionInterface&&); \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(const UTP_InteractionInterface&); \
public:


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(UTP_InteractionInterface&&); \
	LUDENSVR_PROJECT_01_API UTP_InteractionInterface(const UTP_InteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LUDENSVR_PROJECT_01_API, UTP_InteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_InteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_InteractionInterface)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTP_InteractionInterface(); \
	friend struct Z_Construct_UClass_UTP_InteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UTP_InteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LudensVR_Project_01"), LUDENSVR_PROJECT_01_API) \
	DECLARE_SERIALIZER(UTP_InteractionInterface)


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_GENERATED_UINTERFACE_BODY() \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_GENERATED_UINTERFACE_BODY() \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITP_InteractionInterface() {} \
public: \
	typedef UTP_InteractionInterface UClassType; \
	typedef ITP_InteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~ITP_InteractionInterface() {} \
public: \
	typedef UTP_InteractionInterface UClassType; \
	typedef ITP_InteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_14_PROLOG \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_EVENT_PARMS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_RPC_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_CALLBACK_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_CALLBACK_WRAPPERS \
	LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LudensVR_Project_02_Source_LudensVR_Project_01_TP_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
