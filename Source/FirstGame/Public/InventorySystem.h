// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventorySystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryChangedDelegate);

class ABasicItem;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FIRSTGAME_API UInventorySystem : public UActorComponent
{
	GENERATED_BODY()
private:
	FString ActorName;

public:
	// Sets default values for this component's properties
	UInventorySystem();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString RandomText;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ABasicItem*> Items;

	UFUNCTION(BlueprintCallable)
	FString GetSlot1() { return TEXT("xxx"); };

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Custom")
	FOnInventoryChangedDelegate OnInventoryChange;
	
	//UFUNCTION(BlueprintImplementableEvent)
	//void InventoryChanged();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**Need to define these functions*/
	//void LoadInventory(FString ActorName);
	//void SaveInventory();
	UFUNCTION(BlueprintCallable, Category="Items|Gameplay|Inventory", meta=(Keywords="Pickup Item Pick up put in Inventory Character"))
	void PickupItem(ABasicItem* Item);
	
	UFUNCTION(BlueprintCallable, Category = "Items|Gameplay|Inventory", meta = (Keywords = "Use Item"))
	void UseItem(int id);
	
	//void RemoveItem(ABasicItem* Item);
};
