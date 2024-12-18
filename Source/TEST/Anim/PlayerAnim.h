// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnim.generated.h"


class APlayerCharacter;
class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class TEST_API UPlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<APlayerCharacter> playerCharacter;

	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UCharacterMovementComponent> playerCharacterMovement;

	UPROPERTY(BlueprintReadOnly)
	float speed;

};
