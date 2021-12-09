#include "BlightAnimInstance.h"

UBlightAnimInstance::UBlightAnimInstance() {
    this->_blightPowerStateComponent = NULL;
    this->_powerState = EWallGrabState::None;
    this->_stateTimeRemaining = 0.00f;
    this->_lookAngle = 0.00f;
}

