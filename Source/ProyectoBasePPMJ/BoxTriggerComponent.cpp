// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxTriggerComponent.h"

UBoxTriggerComponent::UBoxTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBoxTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (moveActor)
		moveComp = moveActor->FindComponentByClass<UMove>();

	if (isPressuerplate) {
		OnComponentBeginOverlap.AddDynamic(this, &UBoxTriggerComponent::OnBeginOverlap);
		OnComponentEndOverlap.AddDynamic(this, &UBoxTriggerComponent::OnEndOverlap);
	}

}


// Called every frame
void UBoxTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBoxTriggerComponent::Trigger(bool triggerValue)
{
	isTriggered = triggerValue;
	if (moveComp) moveComp->SetShouldMove(triggerValue);
}

void UBoxTriggerComponent::OnBeginOverlap(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	if (otherActor && otherActor->ActorHasTag("Player")) {
		if (!isTriggered) Trigger(true);
	}
}
void UBoxTriggerComponent::OnEndOverlap(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{
	if (otherActor && otherActor->ActorHasTag("Player")) {
		UE_LOG(LogTemp, Warning, TEXT("el jugador se sale"));
		if (isTriggered) Trigger(false);
	}
}