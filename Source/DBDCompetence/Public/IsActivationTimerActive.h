#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsActivationTimerActive.generated.h"

UCLASS()
class DBDCOMPETENCE_API UIsActivationTimerActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsActivationTimerActive();
};

