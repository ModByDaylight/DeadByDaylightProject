#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsCooldownTimerActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsCooldownTimerActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsCooldownTimerActive();
};

