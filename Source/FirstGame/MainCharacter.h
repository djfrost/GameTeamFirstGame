#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

//So we can handle input
class UInputComponent;
class UCharacterMovementComponent;
class UInventorySystem;
UCLASS(config = Game)
class AMainCharacter : public ACharacter {
	GENERATED_BODY()

	private:
		/** First person camera might need to be changed to public*/
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FirstPersonCameraComponent;

		/** Mesh that is shown in front of the cam */
		UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* Mesh1P;

		UPROPERTY(VisibleDefaultsOnly, Category = "Mode")
		bool CharacterMode;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		int InteractRange;

		/**Sets the player up for combat, and red zones*/
		void FightMode();
		/**Sets the player up for slower walking, interactions, and puzzling*/
		void InteractionMode();

	protected:
		/**Defines initial place where the gameplay begins*/
		virtual void BeginPlay();

		/** Handles moving forward/backward */
		void MoveForward(float Val);

		/** Handles stafing movement, left and right */
		void MoveRight(float Val);

		/**
		* Called via input to turn at a given rate.
		* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
		*/
		void TurnAtRate(float Rate);

		/**
		* Called via input to turn look up/down at a given rate.
		* @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
		*/
		void LookUpAtRate(float Rate);

		struct TouchData
		{
			TouchData() { bIsPressed = false; Location = FVector::ZeroVector; }
			bool bIsPressed;
			ETouchIndex::Type FingerIndex;
			FVector Location;
			bool bMoved;
		};
		void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
		void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
		void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
		TouchData	TouchItem;

		// APawn interface
		virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
		// End of APawn interface

		/*
		* Configures input for touchscreen devices if there is a valid touch interface for doing so
		*
		* @param	InputComponent	The input component pointer to bind controls to
		* @returns true if touch controls were enabled.
		*/
		bool EnableTouchscreenMovement(UInputComponent* InputComponent);
	public:
		AMainCharacter();

		/** Returns Mesh1P subobject **/
		FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
		/** Returns FirstPersonCameraComponent subobject **/
		FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

		/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

		/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

		/**Get current location in the world*/
		//UFUNCTION(BlueprintCallable, Category="Gameplay|Character", meta=(Keywords="Get World Location Main Character"))
		//float GetWorldLocation();

		/** pass in false for basic exploration mode, and true for fight mode*/
		UFUNCTION(BlueprintCallable, Category="Gameplay|Character", meta=(Keywords="Main Character Interaction Mode Fight"))
		void ChangeInteractionMode(bool FightMode);

		/** Check to see if the character is looking at an interactable object when button is pressed*/
		UFUNCTION(BlueprintCallable, Category="Gameplay|Character|Interactable", meta=(Keywords="Raycast Main Character Object Item Pickup Look At"))
		void InteractRaycast();

		/**Single instance of our Players Inventory. Other actors can have inventories as well.*/
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UInventorySystem* PlayerInventory = nullptr;
};
