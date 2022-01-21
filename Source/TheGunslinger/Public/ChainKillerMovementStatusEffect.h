#pragma once
#include "CoreMinimal.h"
#include "ChainPlayerMovementStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ChainKillerMovementStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UChainKillerMovementStatusEffect : public UChainPlayerMovementStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _backwardMovementSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _backwardMovementAngle;
    
public:
    UChainKillerMovementStatusEffect();
};

