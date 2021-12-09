#include "BaseCameraTargetingStrategy.h"

UBaseCameraTargetingStrategy::UBaseCameraTargetingStrategy() {
    this->_maxFreeAngle = 45.00f;
    this->_maxInputRotation = 35.00f;
    this->_interpolationSpeed = 2.00f;
    this->_interpolationSpeedOutsideFreeMoveZone = 2.00f;
    this->_target = NULL;
}

