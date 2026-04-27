// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Gun.generated.h"

UCLASS()
class PROYECTOBASEPPMJ_API AGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

	UPROPERTY(VisibleAnywhere)
	USceneComponent* rootComp;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* skMeshComp;

	AController* ownerController;

	void PullTrigger();

	UPROPERTY(EditAnywhere)
	float maxRange = 8000.0f;

	UPROPERTY(VisibleAnywhere)
	UNiagaraComponent* flashParticle;
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* impactParticle;

	UPROPERTY(EditAnywhere)
	USoundBase* shootSound;

	UPROPERTY(EditAnywhere)
	float bulDamage = 24.5f;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
