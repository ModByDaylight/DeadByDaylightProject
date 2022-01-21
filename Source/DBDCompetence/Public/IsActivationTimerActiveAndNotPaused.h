#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsActivationTimerActiveAndNotPaused.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsActivationTimerActiveAndNotPaused();
};

