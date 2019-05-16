// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UnrealStudyGameMode.h"
#include "UnrealStudyHUD.h"
#include "UnrealStudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealStudyGameMode::AUnrealStudyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealStudyHUD::StaticClass();
}
