#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "ActivePhaseWalkInteraction.generated.h"

class UAnimMontage;
class UCurveFloat;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
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
    
public:
    UActivePhaseWalkInteraction();
private:
    UFUNCTION()
    void OnPowerCollected(ADBDPlayer* collector);
    
    UFUNCTION()
    void OnPlayerLocallyObservedChanged(ADBDPlayer* player);
    
protected:
    UFUNCTION(BlueprintPure)
    float GetChargeTime() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_ResetChargeVFX(ADBDPlayer* player);
    
};

