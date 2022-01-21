#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ChainPlayerMovementStatusEffect.generated.h"

class ARifleChain;

UCLASS(meta=(BlueprintSpawnableComponent))
class UChainPlayerMovementStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _baseMovementSpeedMultiplier;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _collisionMovementSpeedMultiplier;
    
    UPROPERTY(Transient)
    ARifleChain* _chain;
    
public:
    UChainPlayerMovementStatusEffect();
private:
    UFUNCTION()
    void OnIsChainCollidingChanged(bool isColliding);
    
};

