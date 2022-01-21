#pragma once
#include "CoreMinimal.h"
#include "BaseModifierCondition.h"
#include "EventDrivenModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UEventDrivenModifierCondition : public UBaseModifierCondition {
    GENERATED_BODY()
public:
    UEventDrivenModifierCondition();
};

