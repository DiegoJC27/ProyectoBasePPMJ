// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ProyectoBasePPMJCharacter.h"
#include "SphereTriggerComp.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTOBASEPPMJ_API USphereTriggerComp : public USphereComponent
{
	GENERATED_BODY()
protected:
	void BegginPlay();
public:

	USphereTriggerComp();


	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* other,
		UPrimitiveComponent* otherComp, int32 otherBodyIndex,
		bool bFromSweep, const FHitResult& sweepResult);
};
