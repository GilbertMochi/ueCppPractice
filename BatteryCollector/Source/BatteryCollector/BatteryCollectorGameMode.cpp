// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//make sure we can tick
	PrimaryActorTick.bCanEverTick = true;

	//base decays rate
	DecayRate = 0.01f;
}

void ABatteryCollectorGameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	ABatteryCollectorCharacter* myCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (myCharacter) {
		if (myCharacter->GetCurrentPower() >= 0)//decrease current power only if it's not below 0
		{			
			//decrease a percentage of the initial power and take it off from current power
			myCharacter->UpdatePower(-DeltaTime * DecayRate * (myCharacter->GetInitialPower()));
		}
	}
}