#include "PositionLagCompensationComponent.h"

UPositionLagCompensationComponent::UPositionLagCompensationComponent() {
    this->_maxExtrapolationDurationInSeconds = 0.00f;
    this->_maxInterpolationToServerMoveInSeconds = 2.00f;
}

