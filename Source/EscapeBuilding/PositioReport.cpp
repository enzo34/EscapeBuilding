// Fill out your copyright notice in the Description page of Project Settings.

#include "PositioReport.h"
#include "EscapeBuilding.h"
#include "GameFramework/Actor.h"



// Sets default values for this component's properties
UPositioReport::UPositioReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositioReport::BeginPlay()
{
	Super::BeginPlay();
	FString ObjectPos = GetOwner()->GetActorLocation().ToString();
	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos);

}


// Called every frame
void UPositioReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

