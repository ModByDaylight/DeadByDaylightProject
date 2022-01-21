#pragma once
#include "CoreMinimal.h"
#include "TimedStatusEffect.h"
#include "AbilityStealthUndetectableEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAbilityStealthUndetectableEffect : public UTimedStatusEffect {
    GENERATED_BODY()
public:
    UAbilityStealthUndetectableEffect();
};

