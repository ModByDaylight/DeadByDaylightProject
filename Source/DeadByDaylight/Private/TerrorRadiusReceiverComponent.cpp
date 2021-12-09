#include "TerrorRadiusReceiverComponent.h"

bool UTerrorRadiusReceiverComponent::IsInTerrorRadiusRange() const {
    return false;
}

bool UTerrorRadiusReceiverComponent::IsInTerrorRadius() const {
    return false;
}

UTerrorRadiusReceiverComponent::UTerrorRadiusReceiverComponent() {
    this->_trVerticalDistanceFactor = NULL;
    this->_heartbeatMasterVolumeInterpolationSpeed = 1.00f;
}

