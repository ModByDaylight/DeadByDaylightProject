#include "KillerProjectileDodgeComponent.h"

class AActor;

void UKillerProjectileDodgeComponent::OnKillerProjectileLaunched() {
}

void UKillerProjectileDodgeComponent::OnKillerProjectileFinishedWithoutCollision() {
}

void UKillerProjectileDodgeComponent::OnKillerProjectileFinished(AActor* survivorHit) {
}

UKillerProjectileDodgeComponent::UKillerProjectileDodgeComponent() {
    this->_killerProjectile = NULL;
}

