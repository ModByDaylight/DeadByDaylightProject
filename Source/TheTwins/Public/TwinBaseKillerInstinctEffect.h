#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "TunableStat.h"
#include "TwinBaseKillerInstinctEffect.generated.h"

UCLASS()
class UTwinBaseKillerInstinctEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _lullabyRange;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _lingerDuration;
    
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
public:
    UTwinBaseKillerInstinctEffect();
};

