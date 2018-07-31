// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPP_ShooterGameMode.h"
#include "FPP_ShooterHUD.h"
#include "FPP_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPP_ShooterGameMode::AFPP_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPP_ShooterHUD::StaticClass();
}
