#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsLifetimeActive.generated.h"

UCLASS()
class UIsLifetimeActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsLifetimeActive();
};

