#pragma once
#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "GameplayTagContainer.h"
#include "SnowmanAttackableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class USnowmanAttackableComponent : public UAttackableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer _killerProjectilesThatCanDamageSnowman;
    
public:
    USnowmanAttackableComponent();
};

