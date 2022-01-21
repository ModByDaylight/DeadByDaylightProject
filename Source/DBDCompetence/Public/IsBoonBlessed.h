#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsBoonBlessed.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsBoonBlessed : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsBoonBlessed();
};

