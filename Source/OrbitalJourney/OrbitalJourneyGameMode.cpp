// Copyright Epic Games, Inc. All Rights Reserved.

#include "OrbitalJourneyGameMode.h"
#include "OrbitalJourneyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOrbitalJourneyGameMode::AOrbitalJourneyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
