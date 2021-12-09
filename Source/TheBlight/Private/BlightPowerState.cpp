#include "BlightPowerState.h"

float UBlightPowerState::GetStateDuration() const {
    return 0.0f;
}

UBlightPowerState::UBlightPowerState() {
    this->_stateSpeedCurve = NULL;
    this->_playerCanCancelEarly = false;
    this->_displayCollisionIndicator = true;
}

