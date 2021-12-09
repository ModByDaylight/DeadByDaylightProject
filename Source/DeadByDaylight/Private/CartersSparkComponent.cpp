#include "CartersSparkComponent.h"

class UInteractionDefinition;
class ADBDPlayer;

void UCartersSparkComponent::TriggerStaticBlastCooldown() {
}

void UCartersSparkComponent::TriggerShockTherapyCooldown() {
}

void UCartersSparkComponent::OnRequestAndBeginInteraction(UInteractionDefinition* interaction) {
}

void UCartersSparkComponent::Multicast_OnShockTherapyCooldownCheatEntered_Implementation() {
}
bool UCartersSparkComponent::Multicast_OnShockTherapyCooldownCheatEntered_Validate() {
    return true;
}

bool UCartersSparkComponent::IsStaticBlastOnCooldown() const {
    return false;
}

bool UCartersSparkComponent::IsShockTherapyOnCooldown() const {
    return false;
}

float UCartersSparkComponent::GetStaticBlastCooldownPercentElapsed() const {
    return 0.0f;
}

void UCartersSparkComponent::Authority_RegisterToGameEvents() {
}

void UCartersSparkComponent::Authority_AddTotallyInsaneSurvivor(ADBDPlayer* insaneSurvivor) {
}

UCartersSparkComponent::UCartersSparkComponent() {
    this->_staticBlastEnabled = false;
    this->_owningPlayer = NULL;
}

