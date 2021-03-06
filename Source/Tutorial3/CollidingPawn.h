// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "CollidingPawn.generated.h"

UCLASS()
class TUTORIAL3_API ACollidingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACollidingPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Sphere, meta=(AllowPrivateAccess="true"))
	class USphereComponent *SphereComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Sphere, meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent *SphereVisual;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Particle, meta=(AllowPrivateAccess="true"))
	UParticleSystemComponent *OurParticleSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Camera, meta=(AllowPrivateAccess="true"))
	class USpringArmComponent *SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Camera, meta=(AllowPrivateAccess="true"))
	class UCameraComponent *Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Movement, meta=(AllowPrivateAccess="true"))
	class UCollidingPawnMovementComponent *OurMovementComponent;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	// Movement control
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void Turn(float AxisValue);
	void ParticleToggle();
	void SwapLevel();
};
