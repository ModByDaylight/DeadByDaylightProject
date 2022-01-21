#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "TestEventDrivenModifierCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UTestEventDrivenModifierCondition : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UTestEventDrivenModifierCondition();
};

