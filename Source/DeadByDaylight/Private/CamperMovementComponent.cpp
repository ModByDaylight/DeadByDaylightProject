#include "CamperMovementComponent.h"

void UCamperMovementComponent::OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

FRotator UCamperMovementComponent::GetRotationRateWhileCrawling() const {
    return FRotator{};
}

FRotator UCamperMovementComponent::GetDefaultRotationRate() const {
    return FRotator{};
}

UCamperMovementComponent::UCamperMovementComponent() {
    this->MaxCrawlSpeed = 70.00f;
    this->MaxRunSpeed = 400.00f;
}

