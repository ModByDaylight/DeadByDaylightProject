#include "KillerAnimInstance.h"

UKillerAnimInstance::UKillerAnimInstance() {
    this->_isAnyMontagePlaying = false;
    this->_isCarrying = false;
    this->_isInAir = false;
    this->_isSpectator = false;
    this->_isIdle = false;
    this->_animDirection = 0.00f;
    this->_animSpeed = 0.00f;
    this->_animPitch = 0.00f;
    this->_animYaw = 0.00f;
    this->_pelvisHeight = 0.00f;
    this->_idleTime = 0.00f;
    this->_directionSwitch = 0;
    this->_isAttacking = false;
    this->_isPlayingAnyMontage = false;
    this->_isKilling = false;
    this->_interactionType = EInteractionAnimation::VE_None;
    this->_armIKSensorComponent = NULL;
    this->_attackState = EAttackSubstate::VE_None;
    this->_forwardVelocity = 0.00f;
    this->_lateralVelocity = 0.00f;
}

