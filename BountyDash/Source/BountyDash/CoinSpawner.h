// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BountyDash.h"
#include "GameFramework/Actor.h"
#include "Coin.h"
#include "Engine/EngineTypes.h"
#include "CoinSpawner.generated.h"

UCLASS()
class BOUNTYDASH_API ACoinSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
		TSubclassOf<ACoin> CoinObject;

	UPROPERTY()
		TArray<class ATargetPoint*> SpawnTransforms;

	UPROPERTY()
		USceneComponent* Root;

	UPROPERTY(EditAnywhere)
		int32 MaxSetCoins;

	UPROPERTY(EditAnywhere)
		int32 MinSetCoins;

	UPROPERTY(EditAnywhere)
		float CoinSetTimeInterval;

	UPROPERTY(EditAnywhere)
		float CoinTimeInterval;

	UPROPERTY(EditAnywhere)
		float MovementTimeInterval;

protected:
	void SpawnCoin();
	void SpawnCoinSet();
	void MoveSpawner();

	int32 NumCoinsToSpawn;
	
	float KillPoint;
	float SpawnPoint;
	int32 TargetLoc;

	FTimerHandle CoinSetTimerHandle;
	FTimerHandle CoinTimerHandle;
	FTimerHandle SpawnMoveTimerHandle;
};
