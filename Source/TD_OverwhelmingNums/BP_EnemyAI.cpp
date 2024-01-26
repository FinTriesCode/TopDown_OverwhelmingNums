// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_EnemyAI.h"

// Sets default values
ABP_EnemyAI::ABP_EnemyAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_EnemyAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_EnemyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABP_EnemyAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

