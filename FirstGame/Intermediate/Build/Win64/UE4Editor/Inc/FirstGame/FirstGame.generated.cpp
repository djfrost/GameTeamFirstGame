// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FirstGame.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FirstGame() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();

	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameGameMode_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameGameMode();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameHUD_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameHUD();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_AMainCharacter_ChangeInteractionMode();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter();
	FIRSTGAME_API class UPackage* Z_Construct_UPackage__Script_FirstGame();
	void AFirstGameGameMode::StaticRegisterNativesAFirstGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstGameGameMode_NoRegister()
	{
		return AFirstGameGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFirstGameGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FirstGame();
			OuterClass = AFirstGameGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFirstGameGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FirstGameGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FirstGameGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstGameGameMode, 1793294500);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstGameGameMode(Z_Construct_UClass_AFirstGameGameMode, &AFirstGameGameMode::StaticClass, TEXT("/Script/FirstGame"), TEXT("AFirstGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameGameMode);
	void AFirstGameHUD::StaticRegisterNativesAFirstGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AFirstGameHUD_NoRegister()
	{
		return AFirstGameHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFirstGameHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_FirstGame();
			OuterClass = AFirstGameHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AFirstGameHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FirstGameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FirstGameHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstGameHUD, 1057670143);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstGameHUD(Z_Construct_UClass_AFirstGameHUD, &AFirstGameHUD::StaticClass, TEXT("/Script/FirstGame"), TEXT("AFirstGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameHUD);
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeInteractionMode", (Native)&AMainCharacter::execChangeInteractionMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AMainCharacter_ChangeInteractionMode()
	{
		struct MainCharacter_eventChangeInteractionMode_Parms
		{
			bool FightMode;
		};
		UObject* Outer=Z_Construct_UClass_AMainCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeInteractionMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(MainCharacter_eventChangeInteractionMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(FightMode, MainCharacter_eventChangeInteractionMode_Parms, bool);
			UProperty* NewProp_FightMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FightMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(FightMode, MainCharacter_eventChangeInteractionMode_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(FightMode, MainCharacter_eventChangeInteractionMode_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay|Character"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Character Interaction Mode Fight"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("pass in false for basic exploration mode, and true for fight mode"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_FirstGame();
			OuterClass = AMainCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AMainCharacter_ChangeInteractionMode());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AMainCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AMainCharacter), 0x0010000000020015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(CharacterMode, AMainCharacter, bool);
				UProperty* NewProp_CharacterMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(CharacterMode, AMainCharacter), 0x0040000000030001, CPP_BOOL_PROPERTY_BITMASK(CharacterMode, AMainCharacter), sizeof(bool), true);
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AMainCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AMainCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainCharacter_ChangeInteractionMode(), "ChangeInteractionMode"); // 3798622939
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMainCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_CharacterMode, TEXT("Category"), TEXT("Mode"));
				MetaData->SetValue(NewProp_CharacterMode, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Mesh that is shown in front of the cam"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera might need to be changed to public"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCharacter, 3277238659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCharacter(Z_Construct_UClass_AMainCharacter, &AMainCharacter::StaticClass, TEXT("/Script/FirstGame"), TEXT("AMainCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	UPackage* Z_Construct_UPackage__Script_FirstGame()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FirstGame")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xA9A12C49;
			Guid.B = 0x0715DE2F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
