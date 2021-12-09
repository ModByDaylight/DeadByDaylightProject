#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "TunableStat.h"
#include "TwinLullabyRangeAdditiveEffect.generated.h"

UCLASS()
class UTwinLullabyRangeAdditiveEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _defaultTwinLullabyDormantRange;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _twinLullabyDormantRange;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _twinLullabyAttachedRange;
    
public:
    UTwinLullabyRangeAdditiveEffect();
};

