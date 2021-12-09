#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "K25TeleportInteraction.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew)
class UK25TeleportInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 _maxNumberLocationQueriesPerTick;
    
    UPROPERTY(EditAnywhere)
    float _timeSensingLamentConfigurationAfterInteractionEnded;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _slowdownAfterTeleportDuration;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_TeleportKillerToTargetPosition(ASlasherPlayer* killer, FVector location, FRotator rotation);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_InitializeHusk(FVector location, FRotator rotation);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TeleportStartEffects(ASlasherPlayer* killer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TeleportEndEffects(ASlasherPlayer* killer);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_TeleportAbortedEffects(ASlasherPlayer* killer);
    
public:
    UK25TeleportInteraction();
};

