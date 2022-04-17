#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CannibalChainsawPower.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "DBDTunableRowHandle.h"
#include "CannibalChainsawPowerComponent.generated.h"

class UPowerChargeComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCannibalChainsawPowerComponent : public UActorComponent, public ICannibalChainsawPower {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPowerChargeComponent* _chainsawPowerCharge;
    
    UPROPERTY(Export, Transient)
    UPowerChargeComponent* _chainsawPowerDischarge;
    
    UPROPERTY(Export, Transient)
    UPowerChargeComponent* _tantrumPowerCharge;
    
    UPROPERTY(Replicated, Transient)
    FTagStateBool _isInTantrum;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NumPowerCharges)
    int32 _numPowerCharges;
    
    UPROPERTY(Replicated, Transient)
    int32 _numPowerChargesConsumed;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainsawDashDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainsawPowerMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainsawChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainsawMaxNumberOfCharges;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chainsawCooldownIncreaseRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chainsawCooldownDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _chainsawMaxCooldownDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tantrumChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tantrumDischargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tantrumMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _tantrumDurationIncreaseRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tantrumDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tantrumMaxDuration;
    
public:
    UCannibalChainsawPowerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnTantrumPowerChargeFull();
    
    UFUNCTION()
    void OnRep_NumPowerCharges(int32 previousNumPowerCharges);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnTantrumPowerChargeFull();
    
    UFUNCTION()
    void Local_OnTantrumPowerChargeFull();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfChainsawPowerCharges() const;
    
private:
    UFUNCTION()
    void Authority_OnChainsawPowerChargeFull();
    
    
    // Fix for true pure virtual functions not being implemented
};

