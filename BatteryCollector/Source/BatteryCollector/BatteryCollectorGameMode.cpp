// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"

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

void ABatteryCollectorGameMode::BeginPlay() {
	Super::BeginPlay();
	SetCurrentState(EBatteryPlayState::EPlaying);

	//set the score to best
	ABatteryCollectorCharacter* myCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (myCharacter) {
		PowerToWin = (myCharacter->GetInitialPower()) * 1.25f;
	}

	if (HUDWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}

	//find all spawn volume actors
	TArray<AActor*>FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors) {
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor) {
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}
}

void ABatteryCollectorGameMode::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	ABatteryCollectorCharacter* myCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (myCharacter) {
		//set game state to win if current power is more that the needed winning power
		if (myCharacter->GetCurrentPower() > GetPowerToWin()) {
			SetCurrentState(EBatteryPlayState::EWon);
		}
		else if (myCharacter->GetCurrentPower() >= 0)//decrease current power only if it's not below 0
		{
			//decrease a percentage of the initial power and take it off from current power
			myCharacter->UpdatePower(-DeltaTime * DecayRate * (myCharacter->GetInitialPower()));
		}
		else if (myCharacter->GetCurrentPower() <= 0) {
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}
}

float ABatteryCollectorGameMode::GetPowerToWin() const {
	return PowerToWin;
}

EBatteryPlayState ABatteryCollectorGameMode::GetCurrentState() const {
	return CurrentState;
}


void ABatteryCollectorGameMode::SetCurrentState(EBatteryPlayState newState) {
	CurrentState = newState;
}