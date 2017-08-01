// Fill out your copyright notice in the Description page of Project Settings.

#include "InventorySystem.h"
#include "BasicItem.h"

// Sets default values for this component's properties
UInventorySystem::UInventorySystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventorySystem::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UInventorySystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventorySystem::PickupItem(ABasicItem* Item){
	if(GEngine){
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Item->GetName());
	}
	Item->PickupItem();
}
