// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorPool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUNDSFPS_API UActorPool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorPool();

  TArray<AActor*> GetPool();

  AActor* Checkout();

  void Return(AActor* ActorToReturn);

  void Add(AActor* ActorToAdd);

private:

  TArray<AActor*> Pool;

};
