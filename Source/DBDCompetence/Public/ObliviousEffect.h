#pragma once
#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ObliviousEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UObliviousEffect : public UAdjustableCooldownStatusEffect {
    GENERATED_BODY()
public:
    UObliviousEffect();
};

