// Fill out your copyright notice in the Description page of Project Settings.

#include "pickUp.h"
#include "Components/StaticMeshComponent.h" 

// Sets default values
ApickUp::ApickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//pickups start being active
	bIsActive = true;

	//create the static mesh component
	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	RootComponent = PickUpMesh;
}

// Called when the game starts or when spawned
void ApickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ApickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//return active state
bool ApickUp::IsActive() {
	return bIsActive;
}

//change active state
void ApickUp::SetActive(bool newPickupState) {
	this->bIsActive = newPickupState;
}

void ApickUp::WasCollected_Implementation() {
	//log debug message
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}