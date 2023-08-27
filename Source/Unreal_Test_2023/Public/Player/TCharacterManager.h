#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "TCharacterManager.generated.h"

UCLASS()
class UNREAL_TEST_2023_API ATCharacterManager : public ACharacter
{
	GENERATED_BODY()

public:
	ATCharacterManager();

protected:
	UPROPERTY(EditAnywhere)
	float camDistanceToPlayer = 400.0f;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraSpring;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* CameraComponent;

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
