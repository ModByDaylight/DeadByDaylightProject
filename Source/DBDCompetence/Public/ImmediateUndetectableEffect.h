#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ImmediateUndetectableEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImmediateUndetectableEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UImmediateUndetectableEffect();
};

