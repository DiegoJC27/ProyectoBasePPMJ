// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SphereTriggerComp.h"
#include "ProyectoBasePPMJCharacter.h"
#include "GameFramework/Actor.h"
#include "KeyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API AKeyPlayer : public AActor
{
	GENERATED_BODY()


public: 
	AKeyPlayer();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* rootComp;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* stMeshComp;

	UPROPERTY(VisibleAnywhere)
	USphereTriggerComp* trigger;

};
