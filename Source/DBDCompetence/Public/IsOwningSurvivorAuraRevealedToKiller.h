#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "IsOwningSurvivorAuraRevealedToKiller.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
    UIsOwningSurvivorAuraRevealedToKiller();
};

