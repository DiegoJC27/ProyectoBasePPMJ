// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPlayer.h"


AKeyPlayer::AKeyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
	SetRootComponent(rootComp);

	stMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	stMeshComp->SetupAttachment(rootComp);

	trigger = CreateDefaultSubobject<USphereTriggerComp>(TEXT("SphereCollider"));
	trigger->SetupAttachment(stMeshComp);
}


