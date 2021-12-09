#include "TheExecutionerAnimInstance.h"


UTheExecutionerAnimInstance::UTheExecutionerAnimInstance() {
    this->_isInTormentMode = false;
    this->_isChargingTormentMode = false;
    this->_isTormentModeAttacking = false;
    this->_tormentModeVerticalInput = 0.00f;
    this->_tormentModeHorizontalInput = 0.00f;
}

