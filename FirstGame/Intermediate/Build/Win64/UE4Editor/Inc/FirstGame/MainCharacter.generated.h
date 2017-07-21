// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define FIRSTGAME_MainCharacter_generated_h

#define FirstGame_Source_FirstGame_MainCharacter_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeInteractionMode) \
	{ \
		P_GET_UBOOL(Z_Param_FightMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeInteractionMode(Z_Param_FightMode); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_MainCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeInteractionMode) \
	{ \
		P_GET_UBOOL(Z_Param_FightMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeInteractionMode(Z_Param_FightMode); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_MainCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter(); \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_MainCharacter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter(); \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_MainCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define FirstGame_Source_FirstGame_MainCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define FirstGame_Source_FirstGame_MainCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMainCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMainCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__CharacterMode() { return STRUCT_OFFSET(AMainCharacter, CharacterMode); }


#define FirstGame_Source_FirstGame_MainCharacter_h_9_PROLOG
#define FirstGame_Source_FirstGame_MainCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainCharacter_h_11_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_MainCharacter_h_11_INCLASS \
	FirstGame_Source_FirstGame_MainCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_MainCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_MainCharacter_h_11_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_MainCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_MainCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
