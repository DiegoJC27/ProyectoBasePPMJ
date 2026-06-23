// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorBoxTriggerComp.h"

void UDoorBoxTriggerComp::OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	AProyectoBasePPMJCharacter* player = Cast< AProyectoBasePPMJCharacter>(other);
	if (player) {
		if (player->keysCollected > 0) {
			if (!isTriggered) Trigger(true);
		}
	}
	
}
