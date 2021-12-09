#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SendToDeathBedInteraction.generated.h"

class ADeathBedInteractable;
class ACamperPlayer;

UCLASS(EditInlineNew)
class USendToDeathBedInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADeathBedInteractable* _deathBed;
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SendCamperToDeathBed(ADeathBedInteractable* deathBed);
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetOwningSurvivor() const;
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void FX_InteractionStart();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void FX_InteractionCancel();
    
    USendToDeathBedInteraction();
};

