#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "SurvivorHitSprintEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorHitSprintEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    USurvivorHitSprintEffect();
};

