#include "K26CrowProjectileAnimInstance.h"

UK26CrowProjectileAnimInstance::UK26CrowProjectileAnimInstance() {
    this->_isInInvalidState = false;
    this->_isInSummonState = false;
    this->_isInIdleState = false;
    this->_isInFollowPathState = false;
    this->_isInOffPathState = false;
    this->_isInDestroyedState = false;
    this->_isBeingFlashlighted = false;
    this->_flashlightProgress = 0.00f;
    this->_owningCrowProjectile = NULL;
}

