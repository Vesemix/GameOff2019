// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Go2019GameMode.h"
#include "Go2019HUD.h"
#include "Go2019Character.h"
#include "UObject/ConstructorHelpers.h"

AGo2019GameMode::AGo2019GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGo2019HUD::StaticClass();
}
