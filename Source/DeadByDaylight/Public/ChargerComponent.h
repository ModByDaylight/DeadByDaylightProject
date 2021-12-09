#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnergyPoweredInterface.h"
#include "EEnergyTypeEnum.h"
#include "ChargerComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargerComponentOnChargeStateChange, bool, Empty);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChargerComponentOnChargePercentChange, float, ChargePercent);

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UChargerComponent : public UActorComponent, public IEnergyPoweredInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ChargerComponentID;
    
    UPROPERTY(BlueprintAssignable)
    FChargerComponentOnChargeStateChange OnChargeStateChange;
    
    UPROPERTY(BlueprintAssignable)
    FChargerComponentOnChargePercentChange OnChargePercentChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEnergyTypeEnum EnergyType;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_EnergyLevel)
    float _currentEnergyLevel;
    
    UPROPERTY(Replicated)
    float _maxEnergyLevel;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseEnergy(float seconds, float energyUseModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetNormalizedEnergyLevel(float energyLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxEnergyLevel(float energyLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetEnergyLevel(float energyLevel);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
private:
    UFUNCTION()
    void OnRep_EnergyLevel(float previousEnergyLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasCharge();
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedEnergyLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxEnergyLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnergyLevel() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UChargerComponent();
};

