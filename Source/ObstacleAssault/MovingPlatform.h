// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 5;
	UPROPERTY(EditAnywhere)
	bool MyBool = true;
	UPROPERTY(EditAnywhere)
	float MyFloat = 6.66;

	// UPROPERTY(EditAnywhere)
	// struct MyVector = {
	// 	float x = 0;
	// 	float y = 0;
	// 	float z = 0;
	// };

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(3, 5, 7);
};
