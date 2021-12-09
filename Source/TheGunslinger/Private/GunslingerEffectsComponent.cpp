#include "GunslingerEffectsComponent.h"

void UGunslingerEffectsComponent::OnItemUsedStateChanged(bool isPressed) {
}

void UGunslingerEffectsComponent::Multicast_PlayOutOfAmmoSound_Implementation() {
}

UGunslingerEffectsComponent::UGunslingerEffectsComponent() {
    this->_minimumTimeBetweenBroadcast = 0.10f;
    this->_rifle = NULL;
}

