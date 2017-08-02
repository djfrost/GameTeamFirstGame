#include "MainCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BasicItem.h"
#include "InventorySystem.h"
DEFINE_LOG_CATEGORY_STATIC(LogChar, Warning, All);


//////////////////////////////////////////////////////////////////////////
// AMainCharacter

AMainCharacter::AMainCharacter() {
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);
	if(InteractRange < 1){
		InteractRange = 400;
	}
	PlayerInventory = CreateDefaultSubobject<UInventorySystem>("Inventory");
	if(PlayerInventory){
	    PlayerInventory->RegisterComponent();
	}
	//PlayerInventory->LoadInventory();
}

void AMainCharacter::BeginPlay()
{
	// Call the base class
	Super::BeginPlay();
	ChangeInteractionMode(false);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMainCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMainCharacter::InteractRaycast);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);


	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMainCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMainCharacter::LookUpAtRate);
}

void AMainCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AMainCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	/**
		Left this code here for easy reference in the future if we wanna
		add touch stuff to the game
	*/
	/*if (TouchItem.bIsPressed == false)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = false;*/
}

void AMainCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMainCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMainCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AMainCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	bool bResult = false;
	if (FPlatformMisc::GetUseVirtualJoysticks() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		bResult = true;
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AMainCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AMainCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AMainCharacter::TouchUpdate);
	}
	return bResult;
}

void AMainCharacter::FightMode(){
	UCharacterMovementComponent* Movement = this->GetCharacterMovement();
	Movement->MaxWalkSpeed = 600;
	Movement->MaxWalkSpeedCrouched = 300;
}
void AMainCharacter::InteractionMode(){
	UCharacterMovementComponent* Movement = this->GetCharacterMovement();
	Movement->MaxWalkSpeed = 200;
	Movement->MaxWalkSpeedCrouched = 100;
}
void AMainCharacter::ChangeInteractionMode(bool FightMode){
	CharacterMode = FightMode;

	UE_LOG(LogChar,Log,TEXT("ChangedInteractionMode CharacterMode is: "), (CharacterMode ? TEXT("True") : TEXT("False")));
	CharacterMode ? this->FightMode() : InteractionMode();
	UE_LOG(LogTemp, Warning, TEXT("ChangeInteractionMode"));

}

void AMainCharacter::InteractRaycast(){
	FVector StartLocation = FirstPersonCameraComponent->GetComponentLocation();
	FVector EndLocation = StartLocation + (FirstPersonCameraComponent->GetForwardVector() * InteractRange);

	FHitResult RaycastHit;

	UE_LOG(LogTemp, Warning, TEXT("InteractRaycast"));

	//Raycast should ignore the character
	FCollisionQueryParams CQP;
	CQP.AddIgnoredActor(this);

	//Raycast
	GetWorld()->LineTraceSingleByChannel(RaycastHit, StartLocation, EndLocation, ECollisionChannel::ECC_WorldDynamic, CQP);

	AActor* CastHit = RaycastHit.GetActor();
	if(CastHit){
		if(CastHit->IsA(ABasicItem::StaticClass())){
			ABasicItem* Pickup = Cast<ABasicItem>(CastHit);
			if (PlayerInventory)
				PlayerInventory->PickupItem(Pickup);
		}
	}
	// if(Object->IsA(InteractableObject::StaticClass())){
	// 	if(GEngine){
	// 	  GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("We have interacted with an object"));
	//   	}
	// }
}
