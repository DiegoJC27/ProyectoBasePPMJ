// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyAI.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_LastPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API UBTService_LastPlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_LastPlayerLocation();
	virtual void TickNode(UBehaviorTreeComponent& ownerComp, uint8* nodeMemory, float deltaSeconds) override;
};
