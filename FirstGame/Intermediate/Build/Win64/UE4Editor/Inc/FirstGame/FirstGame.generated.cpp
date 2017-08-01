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
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();

	FIRSTGAME_API class UFunction* Z_Construct_UFunction_ABasicItem_GetName();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_ABasicItem_PickupItem();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_ABasicItem_UseItem();
	FIRSTGAME_API class UClass* Z_Construct_UClass_ABasicItem_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_ABasicItem();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameGameMode_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameGameMode();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameHUD_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AFirstGameHUD();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_UInventorySystem_PickupItem();
	FIRSTGAME_API class UClass* Z_Construct_UClass_UInventorySystem_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_UInventorySystem();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_AMainCharacter_ChangeMode();
	FIRSTGAME_API class UFunction* Z_Construct_UFunction_AMainCharacter_InteractRaycast();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	FIRSTGAME_API class UClass* Z_Construct_UClass_AMainCharacter();
	FIRSTGAME_API class UPackage* Z_Construct_UPackage__Script_FirstGame();
	void ABasicItem::StaticRegisterNativesABasicItem()
	{
		UClass* Class = ABasicItem::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetName", (Native)&ABasicItem::execGetName },
			{ "PickupItem", (Native)&ABasicItem::execPickupItem },
			{ "UseItem", (Native)&ABasicItem::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_ABasicItem_GetName()
	{
		struct BasicItem_eventGetName_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABasicItem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535, sizeof(BasicItem_eventGetName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, BasicItem_eventGetName_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Items|Gameplay|Inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Get name of item inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BasicItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABasicItem_PickupItem()
	{
		UObject* Outer=Z_Construct_UClass_ABasicItem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PickupItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Items|Gameplay|Inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Pick Up Item From Character Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BasicItem.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Destroys the object in runtime, and adds it to the players inventory"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABasicItem_UseItem()
	{
		UObject* Outer=Z_Construct_UClass_ABasicItem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UseItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Items|Gameplay|Inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Use an item from your inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/BasicItem.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicItem_NoRegister()
	{
		return ABasicItem::StaticClass();
	}
	UClass* Z_Construct_UClass_ABasicItem()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_FirstGame();
			OuterClass = ABasicItem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ABasicItem_GetName());
				OuterClass->LinkChild(Z_Construct_UFunction_ABasicItem_PickupItem());
				OuterClass->LinkChild(Z_Construct_UFunction_ABasicItem_UseItem());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ItemName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ItemName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ItemName, ABasicItem), 0x0040000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABasicItem_GetName(), "GetName"); // 1636291364
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABasicItem_PickupItem(), "PickupItem"); // 3258096768
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABasicItem_UseItem(), "UseItem"); // 3286001556
				static TCppClassTypeInfo<TCppClassTypeTraits<ABasicItem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BasicItem.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BasicItem.h"));
				MetaData->SetValue(NewProp_ItemName, TEXT("Category"), TEXT("BasicItem"));
				MetaData->SetValue(NewProp_ItemName, TEXT("ModuleRelativePath"), TEXT("Public/BasicItem.h"));
				MetaData->SetValue(NewProp_ItemName, TEXT("ToolTip"), TEXT("UPROPERTY(EditAnywhere)\nUImage* ItemPicture;"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicItem, 2008005713);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicItem(Z_Construct_UClass_ABasicItem, &ABasicItem::StaticClass, TEXT("/Script/FirstGame"), TEXT("ABasicItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicItem);
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
	void UInventorySystem::StaticRegisterNativesUInventorySystem()
	{
		UClass* Class = UInventorySystem::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "PickupItem", (Native)&UInventorySystem::execPickupItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_UInventorySystem_PickupItem()
	{
		struct InventorySystem_eventPickupItem_Parms
		{
			ABasicItem* Item;
		};
		UObject* Outer=Z_Construct_UClass_UInventorySystem();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PickupItem"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(InventorySystem_eventPickupItem_Parms));
			UProperty* NewProp_Item = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Item"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Item, InventorySystem_eventPickupItem_Parms), 0x0010000000000080, Z_Construct_UClass_ABasicItem_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Items|Gameplay|Inventory"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Pickup Item Pick up put in Inventory Character"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InventorySystem.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Need to define these functions//void LoadInventory(FString ActorName);\n//void SaveInventory();"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventorySystem_NoRegister()
	{
		return UInventorySystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UInventorySystem()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_FirstGame();
			OuterClass = UInventorySystem::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UInventorySystem_PickupItem());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UInventorySystem_PickupItem(), "PickupItem"); // 1996349893
				static TCppClassTypeInfo<TCppClassTypeTraits<UInventorySystem> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InventorySystem.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/InventorySystem.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventorySystem, 4265678262);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventorySystem(Z_Construct_UClass_UInventorySystem, &UInventorySystem::StaticClass, TEXT("/Script/FirstGame"), TEXT("UInventorySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySystem);
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
		UClass* Class = AMainCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeMode", (Native)&AMainCharacter::execChangeMode },
			{ "InteractRaycast", (Native)&AMainCharacter::execInteractRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_AMainCharacter_ChangeMode()
	{
		struct MainCharacter_eventChangeMode_Parms
		{
			bool Mode;
		};
		UObject* Outer=Z_Construct_UClass_AMainCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(MainCharacter_eventChangeMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Mode, MainCharacter_eventChangeMode_Parms, bool);
			UProperty* NewProp_Mode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Mode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Mode, MainCharacter_eventChangeMode_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Mode, MainCharacter_eventChangeMode_Parms), sizeof(bool), true);
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
	UFunction* Z_Construct_UFunction_AMainCharacter_InteractRaycast()
	{
		UObject* Outer=Z_Construct_UClass_AMainCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InteractRaycast"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Gameplay|Character|Interactable"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Raycast Main Character Object Item Pickup Look At"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check to see if the character is looking at an interactable object when button is pressed"));
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

				OuterClass->LinkChild(Z_Construct_UFunction_AMainCharacter_ChangeMode());
				OuterClass->LinkChild(Z_Construct_UFunction_AMainCharacter_InteractRaycast());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AMainCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AMainCharacter), 0x0010000000020015);
				UProperty* NewProp_InteractRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InteractRange"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(InteractRange, AMainCharacter), 0x0040000000020015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(CharacterMode, AMainCharacter, bool);
				UProperty* NewProp_CharacterMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterMode"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(CharacterMode, AMainCharacter), 0x0040000000030001, CPP_BOOL_PROPERTY_BITMASK(CharacterMode, AMainCharacter), sizeof(bool), true);
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AMainCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AMainCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainCharacter_ChangeMode(), "ChangeMode"); // 973921913
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMainCharacter_InteractRaycast(), "InteractRaycast"); // 558064485
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
				MetaData->SetValue(NewProp_InteractRange, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_InteractRange, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_InteractRange, TEXT("ModuleRelativePath"), TEXT("MainCharacter.h"));
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
	IMPLEMENT_CLASS(AMainCharacter, 1828389640);
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
			Guid.A = 0x2AB1EFF2;
			Guid.B = 0x8F6E470F;
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
