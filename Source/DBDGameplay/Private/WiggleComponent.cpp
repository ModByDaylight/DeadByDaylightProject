#include "WiggleComponent.h"

class AActor;
class ADBDPlayer;
class UChargeableComponent;

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

void UWiggleComponent::OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion) {
}

UChargeableComponent* UWiggleComponent::GetWiggleChargeable() const {
    return NULL;
}

void UWiggleComponent::Authority_AddWiggleCharge(float chargeAmount) {
}

UWiggleComponent::UWiggleComponent() {
    this->_killerWigglingFrom = NULL;
    this->_inputComponent = NULL;
}

