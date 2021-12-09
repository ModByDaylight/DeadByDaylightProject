#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttackableComponent.h"
#include "SnowmanAttackableComponent.generated.h"

UCLASS(BlueprintType)
class USnowmanAttackableComponent : public UAttackableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer _killerProjectilesThatCanDamageSnowman;
    
public:
    USnowmanAttackableComponent();
};

