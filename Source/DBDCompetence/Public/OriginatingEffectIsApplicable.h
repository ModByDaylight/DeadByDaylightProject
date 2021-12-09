#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "OriginatingEffectIsApplicable.generated.h"

UCLASS()
class UOriginatingEffectIsApplicable : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UOriginatingEffectIsApplicable();
};

