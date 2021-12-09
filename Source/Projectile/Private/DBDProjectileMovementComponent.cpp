#include "DBDProjectileMovementComponent.h"

class UPrimitiveComponent;

FVector UDBDProjectileMovementComponent::GetPreviousLocation() const {
    return FVector{};
}

void UDBDProjectileMovementComponent::AddComponentToSweep(UPrimitiveComponent* component) {
}

UDBDProjectileMovementComponent::UDBDProjectileMovementComponent() {
    this->_cachedUpdatedComponent = NULL;
    this->_distanceTravelled = 0.00f;
    this->_hasMaximumDistance = false;
    this->_maximumTravelDistance = 0.00f;
}

