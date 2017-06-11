// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTGAME_FirstGameCharacter_generated_h
#error "FirstGameCharacter.generated.h already included, missing '#pragma once' in FirstGameCharacter.h"
#endif
#define FIRSTGAME_FirstGameCharacter_generated_h

#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_RPC_WRAPPERS
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameCharacter(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameCharacter(); \
public: \
	DECLARE_CLASS(AFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameCharacter(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameCharacter(); \
public: \
	DECLARE_CLASS(AFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameCharacter(AFirstGameCharacter&&); \
	NO_API AFirstGameCharacter(const AFirstGameCharacter&); \
public:


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameCharacter(AFirstGameCharacter&&); \
	NO_API AFirstGameCharacter(const AFirstGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameCharacter)


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstGameCharacter, L_MotionController); }


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_11_PROLOG
#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_INCLASS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FirstGameCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FirstGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
