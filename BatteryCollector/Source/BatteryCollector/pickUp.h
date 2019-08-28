// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "pickUp.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ApickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ApickUp();
	// this is turned off in the cpp file
	virtual void Tick(float DeltaTime) override;

	//return the mesh for the pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickUpMesh; }

	//return if pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
		bool IsActive();

	//allow other classes safely change the pickup state
	UFUNCTION(BlueprintCallable, Category = "Pickup")
		void SetActive(bool newPickupState);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//true when pickup can be used, false otherwise
	bool bIsActive;
	
private:
	//static mesh to represent the pickuo in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta=(AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickUpMesh;

	//root ocmponent
	UPROPERTY()
		USceneComponent* Root;

};
