#include "K24AnimInstance.h"

void UK24AnimInstance::OnKillerPowerLevelChanged(int32 powerLevel) {
}

UK24AnimInstance::UK24AnimInstance() {
    this->_isInPowerMode = false;
    this->_isChargingPower = false;
    this->_isK24PowerAttacking = false;
    this->_isRequestingPowerAttack = false;
    this->_powerLevel = 1;
}

