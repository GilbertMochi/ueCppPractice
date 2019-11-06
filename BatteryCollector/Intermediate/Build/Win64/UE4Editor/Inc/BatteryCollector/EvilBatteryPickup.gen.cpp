// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/Public/EvilBatteryPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvilBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AEvilBatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_AEvilBatteryPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void AEvilBatteryPickup::StaticRegisterNativesAEvilBatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_AEvilBatteryPickup_NoRegister()
	{
		return AEvilBatteryPickup::StaticClass();
	}
	struct Z_Construct_UClass_AEvilBatteryPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEvilBatteryPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABatteryPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEvilBatteryPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EvilBatteryPickup.h" },
		{ "ModuleRelativePath", "Public/EvilBatteryPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEvilBatteryPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEvilBatteryPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEvilBatteryPickup_Statics::ClassParams = {
		&AEvilBatteryPickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEvilBatteryPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEvilBatteryPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEvilBatteryPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEvilBatteryPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEvilBatteryPickup, 3042998671);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<AEvilBatteryPickup>()
	{
		return AEvilBatteryPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEvilBatteryPickup(Z_Construct_UClass_AEvilBatteryPickup, &AEvilBatteryPickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("AEvilBatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEvilBatteryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
