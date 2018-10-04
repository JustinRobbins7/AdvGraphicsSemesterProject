// Fill out your copyright notice in the Description page of Project Settings.

#include "SDeployable.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SHealthComponent.h"

// Sets default values
ASDeployable::ASDeployable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->InitialSpeed = 750.f;
	ProjectileMovement->MaxSpeed = 750.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));

	// Die after 30 seconds by default
	InitialLifeSpan = 30.0f;

	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called every frame
void ASDeployable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

