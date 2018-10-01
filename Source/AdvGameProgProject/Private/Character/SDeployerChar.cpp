// Fill out your copyright notice in the Description page of Project Settings.

#include "SDeployerChar.h"
#include "Actors/SDeployable.h"
#include "Actors/SObjective.h"
#include "Engine/World.h"


ASDeployerChar::ASDeployerChar()
{
	
}

void ASDeployerChar::DeployObject(int ObjId)
{
	UE_LOG(LogTemp, Display, TEXT("DeployObject: Entered Function"));

	if (!DeployableClass_1) {
		UE_LOG(LogTemp, Display, TEXT("DeployObject: DeployableClass error"));
	}

	if (DeployableClass_1)
	{
		UE_LOG(LogTemp, Display, TEXT("DeployObject: IF Entered"));

		FVector EyeLocation;
		FRotator EyeRotation;
		GetActorEyesViewPoint(EyeLocation, EyeRotation);

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<AActor>(DeployableClass_1, GetActorLocation(), EyeRotation, ActorSpawnParams);
	}
}

void ASDeployerChar::DeployObject_1()
{
	DeployObject(1);
}

void ASDeployerChar::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Deploy_1", IE_Pressed, this, &ASDeployerChar::DeployObject_1);
}