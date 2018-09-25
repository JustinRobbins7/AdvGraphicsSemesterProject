// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/SCharacter.h"
#include "SDeployerChar.generated.h"

/**
 * 
 */
UCLASS()
class ADVGAMEPROGPROJECT_API ASDeployerChar : public ASCharacter
{
	GENERATED_BODY()
	
public:

	void DeployObject(int ObjId, FVector DirectionToMove);
	
	TArray<AActor*> Deployables;
	
};
