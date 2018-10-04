// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDeployable.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class USHealthComponent;

UCLASS()
class ADVGAMEPROGPROJECT_API ASDeployable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASDeployable();

protected:

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		USHealthComponent* HealthComp;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
