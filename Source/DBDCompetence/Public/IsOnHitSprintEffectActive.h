#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsOnHitSprintEffectActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsOnHitSprintEffectActive();
};

