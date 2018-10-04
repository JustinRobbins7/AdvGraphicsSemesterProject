// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/SDeployable.h"
#include "SObjective.generated.h"


/**
 * 
 */
UCLASS()
class ADVGAMEPROGPROJECT_API ASObjective : public ASDeployable
{
	GENERATED_BODY()
	
public:

	ASObjective();

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Objective")
		float DefendTime;

	UFUNCTION(BlueprintImplementableEvent, Category = "Objective")
		void HandleCompletion(AActor* DestroyedActor);
	
};
