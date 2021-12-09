#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PushTwinOnLockerInteraction.generated.h"

class AConjoinedTwin;
class UChargeableComponent;
class ADBDPlayer;

UCLASS(EditInlineNew)
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_PushTwinOnLockerChargeable)
    UChargeableComponent* _pushTwinOnLockerChargeable;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pushTwinOnLockerMaxCharge;
    
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void OnRep_PushTwinOnLockerChargeable();
    
    UFUNCTION()
    void Authority_OnSurvivorInLockerChanged(ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPushTwinOnLockerInteraction();
};

