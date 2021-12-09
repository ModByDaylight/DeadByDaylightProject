#include "DoctorPowerAnimStateComponent.h"

void UDoctorPowerAnimStateComponent::SetCurrentAbilityType(EDoctorAbilityType abilityType) {
}

void UDoctorPowerAnimStateComponent::SetCurrentAbilityPhase(EDoctorAbilityPhase abilityPhase) {
}

UDoctorPowerAnimStateComponent::UDoctorPowerAnimStateComponent() {
    this->_abilityType = EDoctorAbilityType::VE_None;
    this->_abilityPhase = EDoctorAbilityPhase::VE_None;
}

