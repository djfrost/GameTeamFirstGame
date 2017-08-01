// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicItem.generated.h"



UCLASS()
class FIRSTGAME_API ABasicItem : public AActor
{
	GENERATED_BODY()
private:

	// UPROPERTY(EditAnywhere)
	// UImage* ItemPicture;

	UPROPERTY(EditAnywhere)
	FString ItemName;

	bool InInventory;
public:
	// Sets default values for this actor's properties
	ABasicItem(bool PickedUp);
	ABasicItem();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	/**Destroys the object in runtime, and adds it to the players inventory*/
	UFUNCTION(BlueprintCallable, Category="Items|Gameplay|Inventory", meta=(Keywords="Pick Up Item From Character Interaction"))
	virtual void PickupItem();

	UFUNCTION(BlueprintCallable, Category="Items|Gameplay|Inventory", meta=(Keywords="Use an item from your inventory"))
	virtual void UseItem();

	//UFUNCTION(BlueprintCallable, Category="Items|Gameplay|Inventory", meta=(Keywords="Get name of item inventory"))
	//virtual FString GetName();
};
