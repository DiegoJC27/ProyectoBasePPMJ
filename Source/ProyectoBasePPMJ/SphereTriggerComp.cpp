// Fill out your copyright notice in the Description page of Project Settings.


#include "SphereTriggerComp.h"

void USphereTriggerComp::BeginPlay()
{
	Super::BeginPlay();
	OnComponentBeginOverlap.AddDynamic(this, &USphereTriggerComp::OnBeginOverlap); UE_LOG(LogTemp, Warning, TEXT("Colisiona con el jugador"));
}

USphereTriggerComp::USphereTriggerComp()
{
	PrimaryComponentTick.bCanEverTick = true;
}
void USphereTriggerComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}
void USphereTriggerComp::OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* other,
	UPrimitiveComponent* otherComp, int32 otherBodyIndex,
	bool bFromSweep, const FHitResult& sweepResult)
{
	if(other)
	{
		UE_LOG(LogTemp, Warning, TEXT("Colisiona con el jugador"));
		AProyectoBasePPMJCharacter* player = Cast<AProyectoBasePPMJCharacter>(other);
		if (player) {
			player->CollectKey();
			GetOwner()->Destroy();
		}
	}
}
