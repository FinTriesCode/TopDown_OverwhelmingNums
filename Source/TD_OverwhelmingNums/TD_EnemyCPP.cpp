// Fill out your copyright notice in the Description page of Project Settings.


#include "TD_EnemyCPP.h"

// Sets default values
ATD_EnemyCPP::ATD_EnemyCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATD_EnemyCPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATD_EnemyCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATD_EnemyCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

