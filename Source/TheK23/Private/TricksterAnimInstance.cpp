#include "TricksterAnimInstance.h"

UTricksterAnimInstance::UTricksterAnimInstance() {
    this->_isAiming = false;
    this->_isThrowInputPressed = 0.00f;
    this->_isThrowingWithLeftArm = false;
    this->_isThrowingWithRightArm = false;
    this->_throwPlayRate = 1.00f;
    this->_baseThrowDuration = 1.00f;
    this->_consecutiveKnivesThrownStacks = 0;
    this->_timeSinceLastKnifeLaunched = 0.00f;
    this->_currentAmmoCount = 0;
    this->_isInSuperMode = false;
    this->_isInActivation = false;
    this->_activationDuration = 1.50f;
    this->_isInDeactivation = false;
    this->_deactivationDuration = 3.00f;
    this->_throwingKnives = NULL;
}

