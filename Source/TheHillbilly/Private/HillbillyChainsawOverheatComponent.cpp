#include "HillbillyChainsawOverheatComponent.h"
#include "Net/UnrealNetwork.h"
#include "PowerChargeComponent.h"

void UHillbillyChainsawOverheatComponent::OnRep_IsChainsawOverheating() {
}

void UHillbillyChainsawOverheatComponent::OnLevelReadyToPlay() {
}

void UHillbillyChainsawOverheatComponent::OnHeatChargeUpdate(const float currentCharge, const float previosCharge) {
}

bool UHillbillyChainsawOverheatComponent::IsChainsawOverheating() const {
    return false;
}

void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeFull() {
}

void UHillbillyChainsawOverheatComponent::Authority_OnHeatChargeEmpty() {
}

void UHillbillyChainsawOverheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHillbillyChainsawOverheatComponent, _isChainsawOverheating);
}

UHillbillyChainsawOverheatComponent::UHillbillyChainsawOverheatComponent() {
    this->_chainsawHeatCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("ChainsawOverheatCharge"));
}

