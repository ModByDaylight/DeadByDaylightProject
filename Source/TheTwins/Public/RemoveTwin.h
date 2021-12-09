#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "AnimationMontageDescriptor.h"
#include "RemoveTwin.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew)
class URemoveTwin : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _removeTwinMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _removeTwinExitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _brotherRemoveDistanceFromSurvivor;
    
    UFUNCTION()
    void OnRemoveMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted, ADBDPlayer* destroyingPlayer);
    
public:
    URemoveTwin();
};

