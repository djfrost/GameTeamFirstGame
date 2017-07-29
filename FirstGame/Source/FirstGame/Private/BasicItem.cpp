// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicItem.h"


// Sets default values
ABasicItem::ABasicItem(bool PickedUp)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if(ItemName.IsEmpty()){
		ItemName  = FString(TEXT("Uknown Item"));
	}
	InInventory = PickedUp;
}
ABasicItem::ABasicItem(){
	PrimaryActorTick.bCanEverTick = true;
	if(ItemName.IsEmpty()){
		ItemName = FString(TEXT("Unknown Item"));
	}
	InInventory = false;
}
// Called when the game starts or when spawned
void ABasicItem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABasicItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABasicItem::PickupItem(){
	if(!InInventory){
		if(GEngine){
	      GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, ItemName);
		  GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("This item is being picked up"));
	  	}
		Destroy();
	}
}
void ABasicItem::UseItem(){
	if(GEngine){
	  GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, ItemName);
	  GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("This item is being used"));
	}
}
