#include "ChargerComponent.h"
#include "Net/UnrealNetwork.h"

void UChargerComponent::UseEnergy(float seconds, float energyUseModifier) {
}

void UChargerComponent::SetNormalizedEnergyLevel(float energyLevel) {
}

void UChargerComponent::SetMaxEnergyLevel(float energyLevel) {
}

void UChargerComponent::SetEnergyLevel(float energyLevel) {
}

void UChargerComponent::Reset() {
}

void UChargerComponent::OnRep_EnergyLevel(float previousEnergyLevel) {
}

bool UChargerComponent::HasCharge() {
    return false;
}

float UChargerComponent::GetNormalizedEnergyLevel() const {
    return 0.0f;
}

float UChargerComponent::GetMaxEnergyLevel() const {
    return 0.0f;
}

float UChargerComponent::GetEnergyLevel() const {
    return 0.0f;
}

void UChargerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChargerComponent, _currentEnergyLevel);
    DOREPLIFETIME(UChargerComponent, _maxEnergyLevel);
}

UChargerComponent::UChargerComponent() {
    this->EnergyType = EEnergyTypeEnum::EBattery;
    this->_currentEnergyLevel = 0.00f;
    this->_maxEnergyLevel = 0.00f;
}

