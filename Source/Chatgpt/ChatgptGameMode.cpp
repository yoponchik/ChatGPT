// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChatgptGameMode.h"
#include "ChatgptCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChatgptGameMode::AChatgptGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
