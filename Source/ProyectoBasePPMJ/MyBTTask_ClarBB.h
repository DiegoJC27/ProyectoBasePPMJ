// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "MyBTTask_ClarBB.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API UMyBTTask_ClarBB : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public: 
	UMyBTTask_ClarBB();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& root, uint8* nodeMemory) override;

};
