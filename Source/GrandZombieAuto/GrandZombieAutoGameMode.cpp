// Copyright Epic Games, Inc. All Rights Reserved.

#include "GrandZombieAutoGameMode.h"
#include "GrandZombieAutoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrandZombieAutoGameMode::AGrandZombieAutoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
