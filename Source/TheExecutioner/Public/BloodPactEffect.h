#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BloodPactEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodPactEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UBloodPactEffect();
};

