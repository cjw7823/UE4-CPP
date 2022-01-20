// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BountyDash.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Obstacle.generated.h"

UCLASS(BlueprintType)
class BOUNTYDASH_API AObstacle : public AActor
{
	GENERATED_BODY()

		float KillPoint;

public:	
	// Sets default values for this actor's properties
	AObstacle();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetKillPoint(float point);
	float GetKillPoint();

protected:
	UFUNCTION()
		virtual void MyOnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
		virtual void MyOnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Mesh;
};
