// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SCharacter.h"
#include "Actors/SDeployable.h"
#include "GameFramework/Actor.h"
#include "SDeployerChar.generated.h"

/**
 * 
 */
UCLASS()
class ADVGAMEPROGPROJECT_API ASDeployerChar : public ASCharacter
{
	GENERATED_BODY()
	
public:

	ASDeployerChar();

	//ASObjective* CurrentObjective;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	
//Deployment Functions

	void DeployObject(int ObjId);

	void DeployObject_1();

	// Deployable to Spawn 
	UPROPERTY(EditDefaultsOnly, Category = "Deployment")
		TSubclassOf<AActor> DeployableClass_1;

};
