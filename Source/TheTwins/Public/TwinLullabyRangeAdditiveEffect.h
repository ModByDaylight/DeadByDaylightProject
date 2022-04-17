#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "TwinLullabyRangeAdditiveEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
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

