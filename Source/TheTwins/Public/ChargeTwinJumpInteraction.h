#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ChargeTwinJumpInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UChargeTwinJumpInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chargeJumpMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _interactionViewPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _interactionViewPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _cancelCooldownTime;
    
public:
    UChargeTwinJumpInteraction();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnJumpReadyChanged(ADBDPlayer* twin, const bool ready);
    
};

