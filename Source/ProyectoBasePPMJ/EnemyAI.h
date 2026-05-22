// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProyectoBasePPMJCharacter.h"
#include "BehaviorTree/blackboardComponent.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAI.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API AEnemyAI : public AAIController
{
	GENERATED_BODY()
	
protected: 
	AProyectoBasePPMJCharacter* playerPawn;

	AProyectoBasePPMJCharacter* myCharacter;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* enemyTree;

	virtual void BeginPlay() override;
	virtual void Tick(float dt) override;

public:
	void StartBehaviorTree(AProyectoBasePPMJCharacter* character);

	AProyectoBasePPMJCharacter* GetPlayerCharacter() const { return playerPawn; }
	AProyectoBasePPMJCharacter* GetMyCharacter() const { return myCharacter; }
};
