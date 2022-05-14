// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestControlRigGameMode.h"
#include "TestControlRigCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestControlRigGameMode::ATestControlRigGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
