// Copyright Epic Games, Inc. All Rights Reserved.

#include "TD_OverwhelmingNumsGameMode.h"
#include "TD_OverwhelmingNumsPlayerController.h"
#include "TD_OverwhelmingNumsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATD_OverwhelmingNumsGameMode::ATD_OverwhelmingNumsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATD_OverwhelmingNumsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}