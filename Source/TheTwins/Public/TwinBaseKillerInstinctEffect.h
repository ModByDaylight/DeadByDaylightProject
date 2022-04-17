#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "TwinBaseKillerInstinctEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinBaseKillerInstinctEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _lullabyRange;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _lingerDuration;
    
public:
    UTwinBaseKillerInstinctEffect();
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
};

