// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAI.h"

void AEnemyAI::BeginPlay()
{
	Super::BeginPlay();
	playerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (playerPawn) {
		SetFocus(playerPawn);
	}
}

void AEnemyAI::Tick(float dt)
{
	Super::Tick(dt);
}
