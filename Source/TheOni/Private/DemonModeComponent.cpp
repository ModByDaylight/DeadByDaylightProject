#include "DemonModeComponent.h"
#include "Net/UnrealNetwork.h"

class UInteractionDefinition;

bool UDemonModeComponent::ShouldLoseDemonModeOnStun() const {
    return false;
}

void UDemonModeComponent::OnPowerChargeFull() const {
}

void UDemonModeComponent::OnPowerChargeEmpty() const {
}

void UDemonModeComponent::OnIsPowerChanged(const bool isInPower) const {
}

void UDemonModeComponent::Multicast_DemonModeInterruptedOnStartup_Implementation() {
}

void UDemonModeComponent::Multicast_DemonModeInterruptedOnEnding_Implementation() {
}

bool UDemonModeComponent::IsInDemonMode() const {
    return false;
}

EDemonModeState UDemonModeComponent::GetDemonModeState() const {
    return EDemonModeState::Invalid;
}

float UDemonModeComponent::GetCurrentCharge() const {
    return 0.0f;
}

float UDemonModeComponent::GetChargePercent() const {
    return 0.0f;
}

void UDemonModeComponent::DBD_DemonModeForever(const bool forever) {
}

bool UDemonModeComponent::CanStartDemonMode() const {
    return false;
}

void UDemonModeComponent::Authority_SetDemonModeCooldownInteraction(UInteractionDefinition* interaction) {
}

void UDemonModeComponent::Authority_OnLevelReadyToPlay() {
}

void UDemonModeComponent::Authority_OnChargeChanged(const float currentChargePercent) {
}

void UDemonModeComponent::Authority_InterruptedMontage(const FAnimationMontageDescriptor montage, bool interrupted) {
}

void UDemonModeComponent::Authority_AddCharge(const float chargeAmount) {
}

void UDemonModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDemonModeComponent, _demonModeState);
}

UDemonModeComponent::UDemonModeComponent() {
    this->_powerChargeComponent = NULL;
    this->_powerToggleComponent = NULL;
    this->_authority_demonModeCooldownStarterComponent = NULL;
    this->_demonModeCooldownInteraction = NULL;
    this->_demonModeState = EDemonModeState::Invalid;
}

