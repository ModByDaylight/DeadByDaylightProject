#include "MapActorComponent.h"

class ADBDPlayer;

void UMapActorComponent::Multicast_SetDetectionEnabled_Implementation(bool enabled) {
}

bool UMapActorComponent::IsKnownBy(const ADBDPlayer* character) const {
    return false;
}

bool UMapActorComponent::GetDetectionEnabled() const {
    return false;
}

UMapActorComponent::UMapActorComponent() {
    this->Category = EMapActorCategory::None;
    this->_mapActorCollider = NULL;
    this->_detectionEnabled = true;
}

