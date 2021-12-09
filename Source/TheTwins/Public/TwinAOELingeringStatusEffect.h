#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "BaseLingeringStatusEffect.h"
#include "TwinAOELingeringStatusEffect.generated.h"

UCLASS()
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _shriekingRange;
    
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
public:
    UTwinAOELingeringStatusEffect();
};

