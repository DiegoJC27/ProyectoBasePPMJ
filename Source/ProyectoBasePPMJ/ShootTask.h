// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAI.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShootTask.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API UShootTask : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UShootTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& root, uint8* nodeMemory) override;

};
