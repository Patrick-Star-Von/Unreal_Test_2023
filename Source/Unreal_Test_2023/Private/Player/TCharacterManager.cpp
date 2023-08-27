#include "Player/TCharacterManager.h"

#include "TDebugger.h"

ATCharacterManager::ATCharacterManager()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraSpring = CreateDefaultSubobject<USpringArmComponent>("Player Spring Arm 111");
	//CameraSpring->SetupAttachment(RootComponent);
	//CameraSpring->bUsePawnControlRotation = false;
	//CameraSpring->

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Player Camera");
	//CameraComponent->SetupAttachment(CameraSpring);
}

void ATCharacterManager::BeginPlay()
{
	Super::BeginPlay();

}

void ATCharacterManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	LogToScreen("Test this one!");
}

void ATCharacterManager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

