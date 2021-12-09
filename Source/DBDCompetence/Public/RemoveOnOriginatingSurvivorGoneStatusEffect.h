#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "RemoveOnOriginatingSurvivorGoneStatusEffect.generated.h"

class ACamperPlayer;

UCLASS()
class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UFUNCTION()
    void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);
    
public:
    URemoveOnOriginatingSurvivorGoneStatusEffect();
};

