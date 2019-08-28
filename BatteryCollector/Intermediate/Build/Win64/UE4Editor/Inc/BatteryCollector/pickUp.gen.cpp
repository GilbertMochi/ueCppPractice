// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/pickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepickUp() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ApickUp_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ApickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ApickUp_IsActive();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ApickUp_SetActive();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ApickUp::StaticRegisterNativesApickUp()
	{
		UClass* Class = ApickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &ApickUp::execIsActive },
			{ "SetActive", &ApickUp::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ApickUp_IsActive_Statics
	{
		struct pickUp_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ApickUp_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((pickUp_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ApickUp_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(pickUp_eventIsActive_Parms), &Z_Construct_UFunction_ApickUp_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ApickUp_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ApickUp_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ApickUp_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "pickUp.h" },
		{ "ToolTip", "return if pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ApickUp_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ApickUp, nullptr, "IsActive", sizeof(pickUp_eventIsActive_Parms), Z_Construct_UFunction_ApickUp_IsActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ApickUp_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ApickUp_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ApickUp_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ApickUp_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ApickUp_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ApickUp_SetActive_Statics
	{
		struct pickUp_eventSetActive_Parms
		{
			bool newPickupState;
		};
		static void NewProp_newPickupState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newPickupState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ApickUp_SetActive_Statics::NewProp_newPickupState_SetBit(void* Obj)
	{
		((pickUp_eventSetActive_Parms*)Obj)->newPickupState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ApickUp_SetActive_Statics::NewProp_newPickupState = { "newPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(pickUp_eventSetActive_Parms), &Z_Construct_UFunction_ApickUp_SetActive_Statics::NewProp_newPickupState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ApickUp_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ApickUp_SetActive_Statics::NewProp_newPickupState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ApickUp_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "pickUp.h" },
		{ "ToolTip", "allow other classes safely change the pickup state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ApickUp_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ApickUp, nullptr, "SetActive", sizeof(pickUp_eventSetActive_Parms), Z_Construct_UFunction_ApickUp_SetActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ApickUp_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ApickUp_SetActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ApickUp_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ApickUp_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ApickUp_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ApickUp_NoRegister()
	{
		return ApickUp::StaticClass();
	}
	struct Z_Construct_UClass_ApickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickUpMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ApickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ApickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ApickUp_IsActive, "IsActive" }, // 2497323160
		{ &Z_Construct_UFunction_ApickUp_SetActive, "SetActive" }, // 153095892
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "pickUp.h" },
		{ "ModuleRelativePath", "pickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApickUp_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "pickUp.h" },
		{ "ToolTip", "root ocmponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ApickUp_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApickUp, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ApickUp_Statics::NewProp_Root_MetaData, ARRAY_COUNT(Z_Construct_UClass_ApickUp_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ApickUp_Statics::NewProp_PickUpMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "pickUp.h" },
		{ "ToolTip", "static mesh to represent the pickuo in the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ApickUp_Statics::NewProp_PickUpMesh = { "PickUpMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ApickUp, PickUpMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ApickUp_Statics::NewProp_PickUpMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ApickUp_Statics::NewProp_PickUpMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ApickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ApickUp_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ApickUp_Statics::NewProp_PickUpMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ApickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ApickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ApickUp_Statics::ClassParams = {
		&ApickUp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ApickUp_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ApickUp_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ApickUp_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ApickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ApickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ApickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ApickUp, 1832322655);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ApickUp>()
	{
		return ApickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ApickUp(Z_Construct_UClass_ApickUp, &ApickUp::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ApickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ApickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
