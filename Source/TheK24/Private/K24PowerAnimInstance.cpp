#include "K24PowerAnimInstance.h"

void UK24PowerAnimInstance::OnLevelReadyToPlay() {
}

void UK24PowerAnimInstance::OnKillerPowerLevelChanged(int32 powerLevel) {
}

void UK24PowerAnimInstance::OnIntroCompleted() {
}

UK24PowerAnimInstance::UK24PowerAnimInstance() {
    this->_owningKiller = NULL;
    this->_isInPowerMode = false;
    this->_isChargingPower = false;
    this->_isK24PowerAttacking = false;
    this->_isRequestingPowerAttack = false;
    this->_tentacleLength = 0.00f;
    this->_isFirstPersonView = false;
    this->_attackSubState = EAttackSubstate::VE_None;
    this->_isIntroCompleted = false;
    this->_isLevelReadyToPlay = false;
    this->_powerLevel = 1;
    this->_forwardVelocity = 0.00f;
    this->_lateralVelocity = 0.00f;
    this->_isKilling = false;
    this->_k24Power = NULL;
}

