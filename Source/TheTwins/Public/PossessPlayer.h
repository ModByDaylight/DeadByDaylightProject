#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PossessPlayer.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew)
class UPossessPlayer : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _possessThePlayerMaxCharge;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnPossessStart(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnPossessCancelled(ADBDPlayer* player);
    
public:
    UPossessPlayer();
};

