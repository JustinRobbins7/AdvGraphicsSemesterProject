// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/SWeapon.h"
#include "GameFramework/Actor.h"
#include "SProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ADVGAMEPROGPROJECT_API ASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()
	
protected:

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		virtual void Fire() override;

public:

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<AActor> ProjectileClass;
	
};
