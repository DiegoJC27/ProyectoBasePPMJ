// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootTask.h"

UShootTask::UShootTask()
{
	NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UShootTask::ExecuteTask(UBehaviorTreeComponent& root, uint8* nodeMemory) {
	Super::ExecuteTask(root, nodeMemory);

	AEnemyAI* controller = Cast<AEnemyAI>(root.GetOwner());
	AProyectoBasePPMJCharacter* myCharacter = controller->GetMyCharacter();

	if (controller->GetPlayerCharacter()->isAlive) {
		myCharacter->Shoot();
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}