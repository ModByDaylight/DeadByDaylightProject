#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "PushTwinOnLockerInteraction.generated.h"

class UChargeableComponent;
class AConjoinedTwin;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPushTwinOnLockerInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_PushTwinOnLockerChargeable)
    UChargeableComponent* _pushTwinOnLockerChargeable;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _pushTwinOnLockerMaxCharge;
    
public:
    UPushTwinOnLockerInteraction();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnTwinSet(AConjoinedTwin* twin);
    
    UFUNCTION()
    void OnRep_PushTwinOnLockerChargeable();
    
    UFUNCTION()
    void Authority_OnSurvivorInLockerChanged(ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor);
    
};

