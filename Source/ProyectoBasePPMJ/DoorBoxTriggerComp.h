// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoxTriggerComponent.h"
#include "ProyectoBasePPMJCharacter.h"
#include "DoorBoxTriggerComp.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROYECTOBASEPPMJ_API UDoorBoxTriggerComp : public UBoxTriggerComponent
{
	GENERATED_BODY()
public: 
	/*UFUNCTION()*/
	void OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* other,
		UPrimitiveComponent* otherComp, int32 otherBodyIndex,
		bool bFromSweep, const FHitResult& sweepResult) override;

};
