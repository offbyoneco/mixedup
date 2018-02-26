// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "mixed_up_0_0_1GameMode.h"
#include "mixed_up_0_0_1PlayerController.h"
#include "mixed_up_0_0_1Pawn.h"

Amixed_up_0_0_1GameMode::Amixed_up_0_0_1GameMode()
{
	// no pawn by default
	DefaultPawnClass = Amixed_up_0_0_1Pawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = Amixed_up_0_0_1PlayerController::StaticClass();
}
