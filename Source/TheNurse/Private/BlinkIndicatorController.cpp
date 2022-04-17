#include "BlinkIndicatorController.h"

UBlinkIndicatorController::UBlinkIndicatorController() {
    this->_indicatorClass = NULL;
    this->_indicatorMinimumVelocity = 460.00f;
    this->_indicatorVelocityEasingFactor = 0.05f;
    this->_indicator = NULL;
}

