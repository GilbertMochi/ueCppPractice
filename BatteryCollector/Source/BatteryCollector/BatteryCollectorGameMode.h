// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BatteryCollectorGameMode.generated.h"

//enum to store game states
UENUM(BlueprintType)
enum class EBatteryPlayState :uint8 {
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	//current playing state
	EBatteryPlayState CurrentState;

	TArray<class ASpawnVolume*>SpawnVolumeActors;

protected:
	//rate at which the character loses power
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		float DecayRate;

	//power to win the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		float PowerToWin;

	//widget class for hud
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		TSubclassOf<class UUserWidget>HUDWidgetClass;

	//instance of the hud
	UPROPERTY()
		class UUserWidget* CurrentWidget;

public:
	ABatteryCollectorGameMode();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	//returns power to win, used in the hud
	UFUNCTION(BlueprintPure, Category = "Power")
		float GetPowerToWin() const;

	//return current play state
	UFUNCTION(BlueprintPure, Category = "")
		EBatteryPlayState GetCurrentState() const;

	//set new play state
	void SetCurrentState(EBatteryPlayState newState);
};



