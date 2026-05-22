// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_ClarBB.h"

UMyBTTask_ClarBB::UMyBTTask_ClarBB()
{
	NodeName = TEXT("ClaerValue");
}

EBTNodeResult::Type UMyBTTask_ClarBB::ExecuteTask(UBehaviorTreeComponent& root, uint8* nodeMemory)
{
	Super::ExecuteTask(root, nodeMemory);
	UBlackboardComponent* bb = root.GetBlackboardComponent();
	bb->ClearValue(GetSelectedBlackboardKey());
	return EBTNodeResult::Succeeded;
}
