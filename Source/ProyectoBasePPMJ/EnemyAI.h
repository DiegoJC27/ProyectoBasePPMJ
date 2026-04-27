// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	APawn* playerPawn;

	virtual void BeginPlay() override;
	virtual void Tick(float dt) override;
};
