#include "BlinkTargetFinder.h"

UBlinkTargetFinder::UBlinkTargetFinder() {
    this->_floorRaycastStartZOffset = 150.00f;
    this->_floorRaycastLength = 1000.00f;
    this->_locationClearStepHeight = 20.00f;
    this->_blinkBlockerSphereCastRadius = 5.00f;
}

