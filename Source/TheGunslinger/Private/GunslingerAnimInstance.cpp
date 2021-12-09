#include "GunslingerAnimInstance.h"

UGunslingerAnimInstance::UGunslingerAnimInstance() {
    this->_isAiming = false;
    this->_isAimingWarmup = false;
    this->_isAimingCooldown = false;
    this->_isAimingReadyToShoot = false;
    this->_isFiring = false;
    this->_isInMissShotCooldown = false;
    this->_isInSuccessShot = false;
    this->_isLinked = false;
    this->_isReeling = false;
    this->_isInGunState = false;
    this->_idleToAimAnimPlayrate = 1.00f;
    this->_aimToIdleAnimPlayrate = 1.00f;
    this->_fireAnimPlayRate = 1.00f;
    this->_missShotCooldownAnimPlayRate = 1.00f;
    this->_successShotAnimPlayRate = 1.00f;
    this->_idleToAimAnim = NULL;
    this->_aimToIdleAnim = NULL;
    this->_fireAnim = NULL;
    this->_missShotCooldownAnim = NULL;
    this->_successShotAnim = NULL;
}

