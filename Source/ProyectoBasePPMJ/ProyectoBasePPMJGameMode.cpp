// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProyectoBasePPMJGameMode.h"

AProyectoBasePPMJGameMode::AProyectoBasePPMJGameMode()
{
	// stub
}

void AProyectoBasePPMJGameMode::BeginPlay()
{
	player = Cast<AProyectoBasePPMJCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyAI::StaticClass(), enemyArray);
	for (AActor* ene : enemyArray) {
		Cast<AEnemyAI>(ene)->StartBehaviorTree(player);
	}
}
