// Copyright Shozzy

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"
class USpringArmComponent;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()
public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override; 
protected:
	UPROPERTY(EditAnywhere, Category = "Camera")
	float DefaultArmLength = 600.f;
private:
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
	void InitAbilityActorInfo();
};
