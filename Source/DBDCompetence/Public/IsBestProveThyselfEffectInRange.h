#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsBestProveThyselfEffectInRange.generated.h"

class UProveThyselfEffect;

UCLASS()
class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange, UProveThyselfEffect* proveThyselfEffect);
    
public:
    UIsBestProveThyselfEffectInRange();
};

