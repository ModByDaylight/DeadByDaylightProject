#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "ActivePhaseWalkInteraction.generated.h"

class ADBDPlayer;
class UCurveFloat;
class UAnimMontage;

UCLASS(EditInlineNew)
class UActivePhaseWalkInteraction : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTunableStat _fullyChargedSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* _chargingSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _phaseWalkPenaltyThreshold;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _phaseWalkPenaltyValue;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _activePhaseWalkChargeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimMontage* _activePhaseWalkChargingMontage;
    
    UFUNCTION()
    void OnPowerCollected(ADBDPlayer* collector);
    
    UFUNCTION()
    void OnPlayerLocallyObservedChanged(ADBDPlayer* player);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetChargeTime() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_ResetChargeVFX(ADBDPlayer* player);
    
public:
    UActivePhaseWalkInteraction();
};

