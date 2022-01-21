#pragma once
#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "MindbreakerBlindnessEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UMindbreakerBlindnessEffect : public UAdjustableCooldownStatusEffect {
    GENERATED_BODY()
public:
    UMindbreakerBlindnessEffect();
};

