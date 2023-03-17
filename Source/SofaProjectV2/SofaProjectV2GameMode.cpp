// Copyright Epic Games, Inc. All Rights Reserved.

#include "SofaProjectV2GameMode.h"
#include "SofaProjectV2Character.h"
#include "UObject/ConstructorHelpers.h"

ASofaProjectV2GameMode::ASofaProjectV2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
