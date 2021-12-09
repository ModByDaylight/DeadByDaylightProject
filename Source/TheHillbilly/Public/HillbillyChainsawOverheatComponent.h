#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "TunableStat.h"
#include "HillbillyChainsawOverheatComponent.generated.h"

class UPowerChargeComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate, const float, currentChargePercent, const bool, isChainsawOverheating);

UCLASS(BlueprintType)
class UHillbillyChainsawOverheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FHillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate OnHeatChargeUpdateDelegate;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsChainsawOverheating)
    FTagStateBool _isChainsawOverheating;
    
    UPROPERTY(Export, Transient)
    UPowerChargeComponent* _chainsawHeatCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _heatMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _heatRevStartAmount;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _heatRevChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _heatDashChargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _heatDischargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _overheatDischargeRate;
    
    UFUNCTION()
    void OnRep_IsChainsawOverheating();
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnHeatChargeUpdate(const float currentCharge, const float previosCharge);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsChainsawOverheating() const;
    
private:
    UFUNCTION()
    void Authority_OnHeatChargeFull();
    
    UFUNCTION()
    void Authority_OnHeatChargeEmpty();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHillbillyChainsawOverheatComponent();
};

