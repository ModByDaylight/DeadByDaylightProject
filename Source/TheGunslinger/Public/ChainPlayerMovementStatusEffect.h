#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "ChainPlayerMovementStatusEffect.generated.h"

class ARifleChain;

UCLASS()
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
    
    UFUNCTION()
    void OnIsChainCollidingChanged(bool isColliding);
    
public:
    UChainPlayerMovementStatusEffect();
};

