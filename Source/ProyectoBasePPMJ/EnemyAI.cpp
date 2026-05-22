// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAI.h"

void AEnemyAI::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemyAI::Tick(float dt)
{
	Super::Tick(dt);

	MoveToActor(playerPawn);
}

void AEnemyAI::StartBehaviorTree(AProyectoBasePPMJCharacter* character)
{
	if (enemyTree) {
		myCharacter = Cast<AProyectoBasePPMJCharacter>(GetPawn());
		playerPawn = character;

		RunBehaviorTree(enemyTree);
		if (myCharacter || playerPawn) {
			UBlackboardComponent* blackboard = GetBlackboardComponent();
			if (blackboard) {
				GetBlackboardComponent()->SetValueAsVector("StartLocation", myCharacter->GetActorLocation());
				GetBlackboardComponent()->SetValueAsVector("PlayerLocation", playerPawn->GetActorLocation());
			}
		}
	}
}
