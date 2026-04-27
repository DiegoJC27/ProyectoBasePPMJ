// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Root"));
	SetRootComponent(rootComp);

	skMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	skMeshComp->SetupAttachment(rootComp);

	flashParticle = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FlashParticle"));
	flashParticle->SetupAttachment(rootComp);
}


void AGun::PullTrigger()
{
	flashParticle->Activate(true);
	UGameplayStatics::PlaySound2D(GetWorld(), shootSound);
	if (ownerController) {
		FVector viewPointLocation;
		FRotator viewPointRotation;
		ownerController->GetPlayerViewPoint(viewPointLocation, viewPointRotation);
				
		FVector endPoint = viewPointLocation + (viewPointRotation.Vector() * maxRange);

		FHitResult hit;
		FCollisionQueryParams params;
		params.AddIgnoredActor(GetOwner());
		params.AddIgnoredActor(this);

		bool isHit = GetWorld()->LineTraceSingleByChannel(hit, viewPointLocation, endPoint, ECC_GameTraceChannel2, params);
		if (isHit) {
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), impactParticle, hit.ImpactPoint, hit.ImpactPoint.Rotation());
			DrawDebugSphere(GetWorld(), hit.ImpactPoint, 10, 8, FColor::Blue, true);

			AActor* hitActor = hit.GetActor();
			if (hitActor) {
				UGameplayStatics::ApplyDamage(hitActor, bulDamage, ownerController, this, UDamageType::StaticClass());
			}
		}
	}
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

