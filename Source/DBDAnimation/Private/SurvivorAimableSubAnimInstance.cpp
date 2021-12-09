#include "SurvivorAimableSubAnimInstance.h"

USurvivorAimableSubAnimInstance::USurvivorAimableSubAnimInstance() {
    this->_pitch = 0.00f;
    this->_isHoldingAimItem = false;
    this->_isAiming = false;
    this->_isAimingAlpha = 0.00f;
    this->_shoulderToCollisionDistance = 0.00f;
}

