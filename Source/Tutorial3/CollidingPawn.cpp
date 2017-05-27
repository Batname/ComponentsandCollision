// Fill out your copyright notice in the Description page of Project Settings.

#include "Tutorial3.h"
#include "CollidingPawn.h"


// Sets default values
ACollidingPawn::ACollidingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    RootComponent = SphereComponent;
    SphereComponent->InitSphereRadius(40.0f);
    SphereComponent->SetCollisionProfileName(TEXT("Pawn"));

    // Create and position mesh component
    SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisulRepresentation"));
    SphereVisual->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/Shapes/Shape_Sphere.Shape_Sphere"));
    if (SphereVisualAsset.Succeeded())
    {
        UE_LOG(LogTemp, Warning, TEXT("Asset was found"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Can not find asset"));
    }
}

// Called when the game starts or when spawned
void ACollidingPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollidingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACollidingPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


