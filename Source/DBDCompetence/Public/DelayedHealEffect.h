#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ECamperDamageState.h"
#include "DelayedHealEffect.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDelayedHealEffect : public UStatusEffect {
    GENERATED_BODY()
public:
    UDelayedHealEffect();
private:
    UFUNCTION()
    void Authority_OnOwningCamperPickedUp(ADBDPlayer* picker);
    
    UFUNCTION()
    void Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after);
    
    UFUNCTION()
    void Authority_OnActivationTimerComplete();
    
};

