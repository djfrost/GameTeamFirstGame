// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FirstGameGameMode.h"
#include "FirstGameHUD.h"
#include "MainCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstGameGameMode::AFirstGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Actors/MainCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstGameHUD::StaticClass();
}
