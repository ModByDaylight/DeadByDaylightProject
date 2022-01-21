#pragma once
#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsChainHuntActive.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsChainHuntActive : public UEventDrivenModifierCondition {
    GENERATED_BODY()
public:
    UIsChainHuntActive();
};

