#include "GhostStalkPowerComponent.h"

void UGhostStalkPowerComponent::RefreshSurvivorMaximumSightDistance() const {
}

void UGhostStalkPowerComponent::OnLeanStateChanged(ELeanState leanState) {
}

void UGhostStalkPowerComponent::OnIsCrouchedChanged(bool isCrouched) {
}

void UGhostStalkPowerComponent::Authority_OnStalkModeChanged(bool isInStalkMode) {
}

UGhostStalkPowerComponent::UGhostStalkPowerComponent() {
    this->_stalkerComponent = NULL;
    this->_crouchAttackRequiredTimeSeconds = 0.00f;
    this->_debugMode = false;
}

