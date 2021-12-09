#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DemogorgonPounceInteraction.generated.h"

class UChargedAttackStateComponent;
class ASlasherPlayer;

UCLASS(EditInlineNew)
class UDemogorgonPounceInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UChargedAttackStateComponent* _chargedAttackState;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _owningSlasher;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void TriggerHuntingAudioEvent(bool isHunting);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void TriggerChargeCancelAudioEvent();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnChargedAttackReadyChanged(bool ready);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCancelCooldownComplete();
    
public:
    UDemogorgonPounceInteraction();
};

