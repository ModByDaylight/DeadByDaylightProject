#include "WorldRunawayMeshComponent.h"

void UWorldRunawayMeshComponent::SetShouldRunAwayWithRandomDelay(bool should, float delayRange) {
}

void UWorldRunawayMeshComponent::SetShouldRunAwayWithDelay(bool should, float delay) {
}

void UWorldRunawayMeshComponent::SetShouldRunAway(bool should) {
}

bool UWorldRunawayMeshComponent::GetShouldRunAway() const {
    return false;
}

UWorldRunawayMeshComponent::UWorldRunawayMeshComponent() {
    this->ResetCooldown = 0.00f;
    this->_runAwayMustTickDuration = 0.00f;
    this->_returnMustTickDuration = 0.00f;
}

