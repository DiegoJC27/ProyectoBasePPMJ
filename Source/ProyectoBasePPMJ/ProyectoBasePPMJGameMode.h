// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProyectoBasePPMJCharacter.h"
#include "EnemyAI.h"
#include "GameFramework/GameModeBase.h"
#include "ProyectoBasePPMJGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AProyectoBasePPMJGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	/** Constructor */
	AProyectoBasePPMJGameMode();

protected:

	virtual void BeginPlay() override;
	AProyectoBasePPMJCharacter* player;

	TArray<AActor*> enemyArray;


};



