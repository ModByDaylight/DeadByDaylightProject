#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "TagStateBool.h"
#include "OnHeatChargeUpdateDelegateDelegate.h"
#include "HillbillyChainsawOverheatComponent.generated.h"

class UPowerChargeComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHillbillyChainsawOverheatComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnHeatChargeUpdateDelegate OnHeatChargeUpdateDelegate;
    
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
    
public:
    UHillbillyChainsawOverheatComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
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
    
};

