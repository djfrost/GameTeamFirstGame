// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTGAME_FirstGameProjectile_generated_h
#error "FirstGameProjectile.generated.h already included, missing '#pragma once' in FirstGameProjectile.h"
#endif
#define FIRSTGAME_FirstGameProjectile_generated_h

#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameProjectile(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameProjectile(); \
public: \
	DECLARE_CLASS(AFirstGameProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameProjectile(); \
	friend FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameProjectile(); \
public: \
	DECLARE_CLASS(AFirstGameProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameProjectile(AFirstGameProjectile&&); \
	NO_API AFirstGameProjectile(const AFirstGameProjectile&); \
public:


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameProjectile(AFirstGameProjectile&&); \
	NO_API AFirstGameProjectile(const AFirstGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameProjectile)


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstGameProjectile, ProjectileMovement); }


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_9_PROLOG
#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_RPC_WRAPPERS \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_INCLASS \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstGame_Source_FirstGame_FirstGameProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FirstGame_Source_FirstGame_FirstGameProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstGame_Source_FirstGame_FirstGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
