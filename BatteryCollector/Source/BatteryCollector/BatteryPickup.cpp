// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

//set default values

ABatteryPickup::ABatteryPickup() {
	GetMesh()->SetSimulatePhysics(true);

	//battery's base power
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation() {
	//base picup behavior
	Super::WasCollected_Implementation();

	//destroy the battery
	Destroy();
}

float ABatteryPickup::GetPower() {
	return BatteryPower;
}