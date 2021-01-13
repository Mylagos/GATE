// Copyright Epic Games, Inc. All Rights Reserved.

#include "GATEGameMode.h"
#include "GATEHUD.h"
#include "GATECharacter.h"
#include "UObject/ConstructorHelpers.h"

AGATEGameMode::AGATEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/GATE_CPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGATEHUD::StaticClass();
}
