// Fill out your copyright notice in the Description page of Project Settings.


#include "AbstructLogComponent.h"

// Sets default values for this component's properties
UAbstructLogComponent::UAbstructLogComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
		UE_LOG (LogTemp,Error,TEXT("Abstruct Component created"));
	// ...
}


// Called when the game starts
void UAbstructLogComponent::BeginPlay()
{
	Super::BeginPlay();
		UE_LOG (LogTemp,Error,TEXT("UAbstructLogComponent::BeginPlay %s"),&DataString);
	// ...
	
}


// Called every frame
void UAbstructLogComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

