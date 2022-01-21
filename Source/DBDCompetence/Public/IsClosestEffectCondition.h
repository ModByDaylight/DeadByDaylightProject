#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsClosestEffectCondition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsClosestEffectCondition : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
    UIsClosestEffectCondition();
};

