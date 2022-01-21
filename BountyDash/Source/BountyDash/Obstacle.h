// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BountyDash.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "BountyDashObject.h"
#include "Obstacle.generated.h"

UCLASS(BlueprintType)
class BOUNTYDASH_API AObstacle : public ABountyDashObject
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AObstacle();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Mesh;
};
