#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "PreventKOEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPreventKOEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UPreventKOEffect();
};

