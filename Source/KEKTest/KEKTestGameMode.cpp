// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "KEKTest.h"
#include "KEKTestGameMode.h"
#include "KEKTestCharacter.h"

AKEKTestGameMode::AKEKTestGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AKEKTestCharacter::StaticClass();	
}
