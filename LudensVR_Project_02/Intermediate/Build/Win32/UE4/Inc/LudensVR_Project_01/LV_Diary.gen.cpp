// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/Public/LV_Diary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLV_Diary() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UEnum* Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Diary_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ALV_Diary();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_LoadGame();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_OnExplode();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_OnOverlapEnd();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_ALV_Diary_SaveGame();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_ULV_DiaryWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
// End Cross Module References
	static UEnum* EDIARYPAGE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE, Z_Construct_UPackage__Script_LudensVR_Project_01(), TEXT("EDIARYPAGE"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDIARYPAGE(EDIARYPAGE_StaticEnum, TEXT("/Script/LudensVR_Project_01"), TEXT("EDIARYPAGE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE_CRC() { return 2171188010U; }
	UEnum* Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LudensVR_Project_01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDIARYPAGE"), 0, Get_Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDIARYPAGE::PAGE_GOTOSTART", (int64)EDIARYPAGE::PAGE_GOTOSTART },
				{ "EDIARYPAGE::PAGE_QUIT", (int64)EDIARYPAGE::PAGE_QUIT },
				{ "EDIARYPAGE::PAGE_MENU", (int64)EDIARYPAGE::PAGE_MENU },
				{ "EDIARYPAGE::PAGE_2", (int64)EDIARYPAGE::PAGE_2 },
				{ "EDIARYPAGE::PAGE_3", (int64)EDIARYPAGE::PAGE_3 },
				{ "EDIARYPAGE::PAGE_4", (int64)EDIARYPAGE::PAGE_4 },
				{ "EDIARYPAGE::PAGE_5", (int64)EDIARYPAGE::PAGE_5 },
				{ "EDIARYPAGE::PAGE_6", (int64)EDIARYPAGE::PAGE_6 },
				{ "EDIARYPAGE::PAGE_7", (int64)EDIARYPAGE::PAGE_7 },
				{ "EDIARYPAGE::PAGE_8", (int64)EDIARYPAGE::PAGE_8 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LV_Diary.h" },
				{ "PAGE_2.DisplayName", "PAGE_2" },
				{ "PAGE_3.DisplayName", "PAGE_3" },
				{ "PAGE_4.DisplayName", "PAGE_4" },
				{ "PAGE_5.DisplayName", "PAGE_5" },
				{ "PAGE_6.DisplayName", "PAGE_6" },
				{ "PAGE_7.DisplayName", "PAGE_7" },
				{ "PAGE_8.DisplayName", "PAGE_8" },
				{ "PAGE_GOTOSTART.DisplayName", "PAGE_GOTOSTART" },
				{ "PAGE_MENU.DisplayName", "PAGE_MENU" },
				{ "PAGE_QUIT.DisplayName", "PAGE_QUIT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDIARYPAGE",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDIARYPAGE",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EButtonEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum, Z_Construct_UPackage__Script_LudensVR_Project_01(), TEXT("EButtonEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EButtonEnum(EButtonEnum_StaticEnum, TEXT("/Script/LudensVR_Project_01"), TEXT("EButtonEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum_CRC() { return 2412858615U; }
	UEnum* Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LudensVR_Project_01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EButtonEnum"), 0, Get_Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EButtonEnum::BE_Go", (int64)EButtonEnum::BE_Go },
				{ "EButtonEnum::BE_Quit", (int64)EButtonEnum::BE_Quit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BE_Go.DisplayName", "Button Go" },
				{ "BE_Quit.DisplayName", "Button Quit" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/LV_Diary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EButtonEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EButtonEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ALV_Diary::StaticRegisterNativesALV_Diary()
	{
		UClass* Class = ALV_Diary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollisionMenuEnabled", &ALV_Diary::execCollisionMenuEnabled },
			{ "LoadGame", &ALV_Diary::execLoadGame },
			{ "OnExplode", &ALV_Diary::execOnExplode },
			{ "OnOverlapBegin", &ALV_Diary::execOnOverlapBegin },
			{ "OnOverlapEnd", &ALV_Diary::execOnOverlapEnd },
			{ "SaveGame", &ALV_Diary::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics
	{
		struct LV_Diary_eventCollisionMenuEnabled_Parms
		{
			bool IsMenu;
		};
		static void NewProp_IsMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::NewProp_IsMenu_SetBit(void* Obj)
	{
		((LV_Diary_eventCollisionMenuEnabled_Parms*)Obj)->IsMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::NewProp_IsMenu = { UE4CodeGen_Private::EPropertyClass::Bool, "IsMenu", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_Diary_eventCollisionMenuEnabled_Parms), &Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::NewProp_IsMenu_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::NewProp_IsMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "CollisionMenuEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(LV_Diary_eventCollisionMenuEnabled_Parms), Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Diary_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "LoadGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_LoadGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Diary_OnExplode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "OnExplode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnExplode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics
	{
		struct LV_Diary_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LV_Diary_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LV_Diary_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420400, sizeof(LV_Diary_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics
	{
		struct LV_Diary_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(LV_Diary_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(LV_Diary_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALV_Diary_SaveGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALV_Diary_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALV_Diary_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALV_Diary, "SaveGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALV_Diary_SaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALV_Diary_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALV_Diary_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALV_Diary_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALV_Diary_NoRegister()
	{
		return ALV_Diary::StaticClass();
	}
	struct Z_Construct_UClass_ALV_Diary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage8Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage8Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage7Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage7Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage6Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage6Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage5Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage5Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage4Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage4Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage3Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage3Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryPage2Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryPage2Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DiaryMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_DiaryMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonEnum_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiaryPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DiaryPage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DiaryPage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PageNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOvertimeButton_MetaData[];
#endif
		static void NewProp_OnOvertimeButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnOvertimeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOverlapButton_MetaData[];
#endif
		static void NewProp_OnOverlapButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnOverlapButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWidget_MetaData[];
#endif
		static void NewProp_IsWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_Next_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_Next;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_Before_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_Before;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_NO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_NO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_YES_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_YES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_Q_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_Q;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_G_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimReverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetMenu_G_Q_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetMenu_G_Q;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALV_Diary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALV_Diary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALV_Diary_CollisionMenuEnabled, "CollisionMenuEnabled" }, // 581286764
		{ &Z_Construct_UFunction_ALV_Diary_LoadGame, "LoadGame" }, // 3042220153
		{ &Z_Construct_UFunction_ALV_Diary_OnExplode, "OnExplode" }, // 4008199878
		{ &Z_Construct_UFunction_ALV_Diary_OnOverlapBegin, "OnOverlapBegin" }, // 3523773638
		{ &Z_Construct_UFunction_ALV_Diary_OnOverlapEnd, "OnOverlapEnd" }, // 1775952592
		{ &Z_Construct_UFunction_ALV_Diary_SaveGame, "SaveGame" }, // 3141934223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LV_Diary.h" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage8Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage8Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage8Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage8Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage8Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage8Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage7Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage7Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage7Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage7Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage7Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage7Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage6Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage6Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage6Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage6Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage6Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage6Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage5Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage5Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage5Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage5Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage5Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage5Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage4Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage4Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage4Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage4Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage4Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage4Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage3Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage3Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage3Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage3Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage3Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage3Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage2Widget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage2Widget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryPage2Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryPage2Widget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage2Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage2Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryMenuWidget_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryMenuWidget = { UE4CodeGen_Private::EPropertyClass::Object, "m_DiaryMenuWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000009001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, m_DiaryMenuWidget), Z_Construct_UClass_ULV_DiaryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryMenuWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum_MetaData[] = {
		{ "Category", "LV_Diary" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonEnum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ALV_Diary, ButtonEnum), Z_Construct_UEnum_LudensVR_Project_01_EButtonEnum, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage = { UE4CodeGen_Private::EPropertyClass::Enum, "DiaryPage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ALV_Diary, DiaryPage), Z_Construct_UEnum_LudensVR_Project_01_EDIARYPAGE, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_PageNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_PageNumber = { UE4CodeGen_Private::EPropertyClass::Int, "PageNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ALV_Diary, PageNumber), METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_PageNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_PageNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	void Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton_SetBit(void* Obj)
	{
		((ALV_Diary*)Obj)->OnOvertimeButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton = { UE4CodeGen_Private::EPropertyClass::Bool, "OnOvertimeButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_Diary), &Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	void Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton_SetBit(void* Obj)
	{
		((ALV_Diary*)Obj)->OnOverlapButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton = { UE4CodeGen_Private::EPropertyClass::Bool, "OnOverlapButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_Diary), &Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	void Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget_SetBit(void* Obj)
	{
		((ALV_Diary*)Obj)->IsWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget = { UE4CodeGen_Private::EPropertyClass::Bool, "IsWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALV_Diary), &Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Next_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Next = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_Next", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_Next), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Next_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Next_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Before_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Before = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_Before", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_Before), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Before_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Before_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_NO_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_NO = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_NO", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_NO), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_NO_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_NO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_YES_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_YES = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_YES", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_YES), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_YES_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_YES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Q_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Q = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_Q", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_Q), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Q_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Q_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_G_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "WidgetBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_G = { UE4CodeGen_Private::EPropertyClass::Object, "BoxCollider_G", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a000d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, BoxCollider_G), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_G_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_AnimReverse_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_AnimReverse = { UE4CodeGen_Private::EPropertyClass::Object, "AnimReverse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_Diary, AnimReverse), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_AnimReverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_AnimReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_Anim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_Anim = { UE4CodeGen_Private::EPropertyClass::Object, "Anim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020015, 1, nullptr, STRUCT_OFFSET(ALV_Diary, Anim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_Anim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_Anim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_SkeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_SkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetMenu_G_Q_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetMenu_G_Q = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetMenu_G_Q", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, WidgetMenu_G_Q), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetMenu_G_Q_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetMenu_G_Q_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetRight = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, WidgetRight), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Diary" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LV_Diary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetLeft = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ALV_Diary, WidgetLeft), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALV_Diary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage8Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage7Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage6Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage5Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage4Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage3Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryPage2Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_m_DiaryMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_ButtonEnum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_DiaryPage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_PageNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOvertimeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_OnOverlapButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_IsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_NO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_YES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_Q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_BoxCollider_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_AnimReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetMenu_G_Q,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALV_Diary_Statics::NewProp_WidgetLeft,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALV_Diary_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTP_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ALV_Diary, ITP_InteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALV_Diary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALV_Diary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALV_Diary_Statics::ClassParams = {
		&ALV_Diary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALV_Diary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ALV_Diary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALV_Diary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALV_Diary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALV_Diary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALV_Diary, 3486071373);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALV_Diary(Z_Construct_UClass_ALV_Diary, &ALV_Diary::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("ALV_Diary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALV_Diary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
