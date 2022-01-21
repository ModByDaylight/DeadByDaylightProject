#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "AdjustableCooldownStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAdjustableCooldownStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag CooldownModifierType;
    
public:
    UAdjustableCooldownStatusEffect();
};

