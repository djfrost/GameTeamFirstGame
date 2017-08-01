// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_BasicItem_generated_h
#error "BasicItem.generated.h already included, missing '#pragma once' in BasicItem.h"
#endif
#define FIRSTGAME_BasicItem_generated_h

#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PickupItem(); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PickupItem(); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicItem(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_ABasicItem(); \
public: \
	DECLARE_CLASS(ABasicItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ABasicItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABasicItem(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_ABasicItem(); \
public: \
	DECLARE_CLASS(ABasicItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(ABasicItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicItem(ABasicItem&&); \
	NO_API ABasicItem(const ABasicItem&); \
public:


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicItem(ABasicItem&&); \
	NO_API ABasicItem(const ABasicItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicItem)


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemName() { return STRUCT_OFFSET(ABasicItem, ItemName); }


#define FirstGame_Source_FirstGame_Public_BasicItem_h_11_PROLOG
#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_INCLASS \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_Public_BasicItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_Public_BasicItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_Public_BasicItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
