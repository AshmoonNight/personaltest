// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "pushcubeactor.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PUSHCUBE_API Upushcubeactor : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	Upushcubeactor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Presets")
		float Force;
	UPROPERTY(EditAnywhere, Category = "Presets")
		TSubclassOf<AActor> SpawnedCube;
	UPROPERTY(EditAnywhere, Category = "Presets")
		float ForceLenth;

public:
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override; //��ʱ�ò���
	UFUNCTION(BlueprintCallable, Category = "Presets")
		void StartPushing(bool spawnCube);


};
