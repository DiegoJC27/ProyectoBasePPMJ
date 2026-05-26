// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereTriggerComp.h"

void USphereTriggerComp::BegginPlay()
{
	OnComponentBeginOverlap.AddDynamic(this, &USphereTriggerComp::OnBeginOverlap);
}

USphereTriggerComp::USphereTriggerComp()
{
	PrimaryComponentTick.bCanEverTick = true;
}
void USphereTriggerComp::OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* other,
	UPrimitiveComponent* otherComp, int32 otherBodyIndex,
	bool bFromSweep, const FHitResult& sweepResult)
{
	AProyectoBasePPMJCharacter* player = Cast<AProyectoBasePPMJCharacter>(other);
	if (player) {
		player->CollectKey();
		GetOwner()->Destroy();
	}
}
