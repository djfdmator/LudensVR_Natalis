// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LudensVR_Project_01/TP_InteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_InteractionInterface() {}
// Cross Module References
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister();
	LUDENSVR_PROJECT_01_API UClass* Z_Construct_UClass_UTP_InteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_LudensVR_Project_01();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_UTP_InteractionInterface_Drop();
	LUDENSVR_PROJECT_01_API UFunction* Z_Construct_UFunction_UTP_InteractionInterface_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ITP_InteractionInterface::Drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void ITP_InteractionInterface::Pickup(USceneComponent* AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UTP_InteractionInterface::StaticRegisterNativesUTP_InteractionInterface()
	{
		UClass* Class = UTP_InteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &ITP_InteractionInterface::execDrop },
			{ "Pickup", &ITP_InteractionInterface::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|BPI_Lowlevel|Player" },
		{ "ModuleRelativePath", "TP_InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_InteractionInterface, "Drop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTP_InteractionInterface_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTP_InteractionInterface_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::NewProp_AttachTo = { UE4CodeGen_Private::EPropertyClass::Object, "AttachTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(TP_InteractionInterface_eventPickup_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::NewProp_AttachTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTemplate|BPI_Lowlevel|Player" },
		{ "ModuleRelativePath", "TP_InteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_InteractionInterface, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(TP_InteractionInterface_eventPickup_Parms), Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTP_InteractionInterface_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTP_InteractionInterface_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTP_InteractionInterface_NoRegister()
	{
		return UTP_InteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTP_InteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_InteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_LudensVR_Project_01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_InteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_InteractionInterface_Drop, "Drop" }, // 3867763679
		{ &Z_Construct_UFunction_UTP_InteractionInterface_Pickup, "Pickup" }, // 816523625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_InteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_InteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITP_InteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTP_InteractionInterface_Statics::ClassParams = {
		&UTP_InteractionInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTP_InteractionInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTP_InteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTP_InteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTP_InteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTP_InteractionInterface, 2119329184);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTP_InteractionInterface(Z_Construct_UClass_UTP_InteractionInterface, &UTP_InteractionInterface::StaticClass, TEXT("/Script/LudensVR_Project_01"), TEXT("UTP_InteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_InteractionInterface);
	static FName NAME_UTP_InteractionInterface_Drop = FName(TEXT("Drop"));
	void ITP_InteractionInterface::Execute_Drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTP_InteractionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTP_InteractionInterface_Drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITP_InteractionInterface*)(O->GetNativeInterfaceAddress(UTP_InteractionInterface::StaticClass())))
		{
			I->Drop_Implementation();
		}
	}
	static FName NAME_UTP_InteractionInterface_Pickup = FName(TEXT("Pickup"));
	void ITP_InteractionInterface::Execute_Pickup(UObject* O, USceneComponent* AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTP_InteractionInterface::StaticClass()));
		TP_InteractionInterface_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTP_InteractionInterface_Pickup);
		if (Func)
		{
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITP_InteractionInterface*)(O->GetNativeInterfaceAddress(UTP_InteractionInterface::StaticClass())))
		{
			I->Pickup_Implementation(AttachTo);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
