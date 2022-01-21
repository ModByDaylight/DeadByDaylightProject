#pragma once
#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "TunableStat.h"
#include "TwinAOELingeringStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _shriekingRange;
    
public:
    UTwinAOELingeringStatusEffect();
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
};

