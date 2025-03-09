// Copyright Epic Games, Inc. All Rights Reserved.

#include "LoveStoryTemplateGameMode.h"
#include "LoveStoryTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALoveStoryTemplateGameMode::ALoveStoryTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
