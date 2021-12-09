#include "FootGroundDetectorComponent.h"

UFootGroundDetectorComponent::UFootGroundDetectorComponent() {
    this->_footLength = 25.00f;
    this->_traceRadius = 8.00f;
    this->_maxWalkableSlopeAngle = 45.00f;
    this->_movementComp = NULL;
}

