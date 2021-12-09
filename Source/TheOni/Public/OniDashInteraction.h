#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniDashInteraction.generated.h"

class ADBDPlayer;
class UCurveFloat;

UCLASS(EditInlineNew)
class UOniDashInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _chargingSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _dashingSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float _yawAdjustTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _cooldownSpeedCurve;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerOwner(const ADBDPlayer* player);
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDashEnd(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDashBegin(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnChargeEnd(ADBDPlayer* player, const bool chargeCompleted);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnChargeBegin(ADBDPlayer* player);
    
public:
    UOniDashInteraction();
};

