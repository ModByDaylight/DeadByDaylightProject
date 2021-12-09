#include "HitValidatorComponent.h"

void UHitValidatorComponent::Multicast_DrawDebugHit_Implementation(FHitValidationReport report) {
}

UHitValidatorComponent::UHitValidatorComponent() {
    this->_maximumSquareDistance = 640000.00f;
}

