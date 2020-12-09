// Copyright Epic Games, Inc. All Rights Reserved.

#include "JediFallenOrderGameMode.h"
#include "JediFallenOrderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJediFallenOrderGameMode::AJediFallenOrderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
