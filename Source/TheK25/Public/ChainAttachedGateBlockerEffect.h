#pragma once
#include "CoreMinimal.h"
#include "GateBlockerEffect.h"
#include "DBDTunableRowHandle.h"
#include "ECamperDamageState.h"
#include "ChainAttachedGateBlockerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UChainAttachedGateBlockerEffect : public UGateBlockerEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blockGateLingeringTimeDyingState;
    
public:
    UChainAttachedGateBlockerEffect();
private:
    UFUNCTION()
    void OnSurvivorDamageStateChanged(const ECamperDamageState oldState, const ECamperDamageState newState);
    
};

