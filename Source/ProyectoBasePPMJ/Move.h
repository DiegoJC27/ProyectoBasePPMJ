// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Move.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROYECTOBASEPPMJ_API UMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetShouldMove(bool move);

	bool GetShouldMove() const;

	UPROPERTY(EditAnywhere)
	FVector moveOffset;

	UPROPERTY(VisibleAnywhere)
	FVector startLocation;

	UPROPERTY(VisibleAnywhere)
	FVector targetLocation;

	UPROPERTY(EditAnywhere)
	float moveTime;
	bool reachedTarget { true };
	UPROPERTY(EditAnywhere)
	bool shouldMove { false };

};
