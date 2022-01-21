#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DeadHardEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadHardEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UDeadHardEffect();
};

