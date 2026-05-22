// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_LastPlayerLocation.h"

UBTService_LastPlayerLocation::UBTService_LastPlayerLocation()
{
	NodeName = TEXT("Update Last Known Player Location");
}

void UBTService_LastPlayerLocation::TickNode(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory, float deltaSeconds)
{
	Super::TickNode(ownerComp, nodeMemory, deltaSeconds);
	AEnemyAI* controller = Cast<AEnemyAI>(ownerComp.GetAIOwner());
	AProyectoBasePPMJCharacter* player = controller->GetPlayerCharacter();
	UBlackboardComponent* blackboard = controller->GetBlackboardComponent();

	if (player) {
		blackboard->SetValueAsVector("LastKnownLocation", player->GetActorLocation());
	}

}
