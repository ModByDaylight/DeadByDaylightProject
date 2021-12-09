#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsActivationTimerActiveAndNotPaused.generated.h"

UCLASS()
class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsActivationTimerActiveAndNotPaused();
};

