#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsBestProveThyselfEffectInRange.generated.h"

class UProveThyselfEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsBestProveThyselfEffectInRange();
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange, UProveThyselfEffect* proveThyselfEffect);
    
};

