// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_pickUp_generated_h
#error "pickUp.generated.h already included, missing '#pragma once' in pickUp.h"
#endif
#define BATTERYCOLLECTOR_pickUp_generated_h

#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_newPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_newPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_newPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_newPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesApickUp(); \
	friend struct Z_Construct_UClass_ApickUp_Statics; \
public: \
	DECLARE_CLASS(ApickUp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ApickUp)


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_INCLASS \
private: \
	static void StaticRegisterNativesApickUp(); \
	friend struct Z_Construct_UClass_ApickUp_Statics; \
public: \
	DECLARE_CLASS(ApickUp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ApickUp)


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ApickUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ApickUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApickUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApickUp(ApickUp&&); \
	NO_API ApickUp(const ApickUp&); \
public:


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApickUp(ApickUp&&); \
	NO_API ApickUp(const ApickUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApickUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ApickUp)


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickUpMesh() { return STRUCT_OFFSET(ApickUp, PickUpMesh); } \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ApickUp, Root); }


#define BatteryCollector_Source_BatteryCollector_pickUp_h_9_PROLOG
#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_INCLASS \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_pickUp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_pickUp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ApickUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_pickUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
