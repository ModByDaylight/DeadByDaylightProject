#pragma once
#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ExposedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UExposedEffect : public UAdjustableCooldownStatusEffect {
    GENERATED_BODY()
public:
    UExposedEffect();
};

