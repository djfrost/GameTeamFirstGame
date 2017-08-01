// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABasicItem;
#ifdef FIRSTGAME_InventorySystem_generated_h
#error "InventorySystem.generated.h already included, missing '#pragma once' in InventorySystem.h"
#endif
#define FIRSTGAME_InventorySystem_generated_h

#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_GET_OBJECT(ABasicItem,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PickupItem(Z_Param_Item); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_GET_OBJECT(ABasicItem,Z_Param_Item); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PickupItem(Z_Param_Item); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySystem(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_UInventorySystem(); \
public: \
	DECLARE_CLASS(UInventorySystem, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(UInventorySystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInventorySystem(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_UInventorySystem(); \
public: \
	DECLARE_CLASS(UInventorySystem, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(UInventorySystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySystem(UInventorySystem&&); \
	NO_API UInventorySystem(const UInventorySystem&); \
public:


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventorySystem(UInventorySystem&&); \
	NO_API UInventorySystem(const UInventorySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventorySystem)


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_PRIVATE_PROPERTY_OFFSET
#define FirstGame_Source_FirstGame_Public_InventorySystem_h_11_PROLOG
#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_INCLASS \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_Public_InventorySystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_Public_InventorySystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_Public_InventorySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
