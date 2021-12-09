#include "TwinLockerBlockerComponent.h"

class ADBDPlayer;

void UTwinLockerBlockerComponent::OnSurvivorInLockerChanged(ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor) {
}

void UTwinLockerBlockerComponent::OnPushedMontageStopped(const FAnimationMontageDescriptor montageDescriptor) {
}

void UTwinLockerBlockerComponent::OnPushedMontageStarted(const FAnimationMontageDescriptor montageDescriptor, const float rate) {
}

void UTwinLockerBlockerComponent::OnPushedMontageEnded(const FAnimationMontageDescriptor montageDescriptor, bool interrupted) {
}

bool UTwinLockerBlockerComponent::IsTwinAttachedToLocker() const {
    return false;
}


void UTwinLockerBlockerComponent::Authority_OnLevelReadyToPlay() {
}

UTwinLockerBlockerComponent::UTwinLockerBlockerComponent() {
}

