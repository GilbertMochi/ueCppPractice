// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "pickUp.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public ApickUp
{
	GENERATED_BODY()
	
public: 
	ABatteryPickup();//defaullt values for this actor

	//override the WasCollectedfunction, use implementation because it is blueprintnative event
	void WasCollected_Implementation() override;

	//public way to access battery's power level
	float GetPower();

protected:

	//amount of power the battery gives to player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category ="Power", Meta= (BlueprintProtected = "true"))
	float BatteryPower;

};
