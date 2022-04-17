#include "WiggleComponent.h"
#include "ChargeableComponent.h"

class ADBDPlayer;

void UWiggleComponent::Server_SetPlayerWiggleSkillCheckEnabled_Implementation(const bool enabled) {
}

void UWiggleComponent::Server_OnWiggleEnd_Implementation() {
}

void UWiggleComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type) {
}

void UWiggleComponent::OnWiggleInput() {
}

void UWiggleComponent::OnWiggleEnd() {
}

void UWiggleComponent::OnPlayerPickedUpStart(ADBDPlayer* picker) {
}

void UWiggleComponent::OnPlayerPickedUpEnd(ADBDPlayer* picker) {
}

void UWiggleComponent::OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type) {
}

void UWiggleComponent::OnKeyBindingsChanged() {
}

void UWiggleComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType type) {
}

void UWiggleComponent::Local_OnLevelReadyToPlay() {
}

UChargeableComponent* UWiggleComponent::GetWiggleChargeable() const {
    return NULL;
}

void UWiggleComponent::Authority_AddWiggleCharge(float chargeAmount) {
}

UWiggleComponent::UWiggleComponent() {
    this->_wiggleProgress = CreateDefaultSubobject<UChargeableComponent>(TEXT("WiggleChargeable"));
    this->_killerWigglingFrom = NULL;
    this->_inputComponent = NULL;
    this->_wiggleInputLockTime = 0.02f;
}

