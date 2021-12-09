#include "LocomotionLookAtSurvivorSubAnimInstance.h"

ULocomotionLookAtSurvivorSubAnimInstance::ULocomotionLookAtSurvivorSubAnimInstance() {
    this->_isInjured = false;
    this->_isCrawling = false;
    this->_isDead = false;
    this->_isUsingAimItem = false;
    this->_aimOffsetPitch = 0.00f;
    this->_aimOffsetYaw = 0.00f;
    this->_aimOffsetYawInterpolated = 0.00f;
    this->_allowLookAt = false;
    this->_isDrasticAimOffsetYawChangeDetected = false;
    this->_aimOffsetYawInterpolationSpeed = 1000.00f;
    this->_aimOffsetYawDeadzoneStart = 173.00f;
    this->_aimOffsetYawClampValue = 172.00f;
    this->_aimOffsetYawDrasticChangeUpperLimit = 100.00f;
    this->_aimOffsetYawDrasticChangeLowerLimit = 10.00f;
    this->_aimOffsetYawDrasticChangeInterpolationSpeed = 2200.00f;
    this->_aimOffsetYawInterpolateEaseIn = NULL;
    this->_aimOffsetYawInterpolateEaseOut = NULL;
    this->_aimOffsetYawInterpolationEaseInLength = 0.50f;
    this->_aimOffsetYawInterpolationEaseOutDistance = 10.00f;
    this->_isAimOffsetYawInDeadZone = false;
    this->_currentTargetAimOffsetYaw = 0.00f;
    this->_aimOffsetYawAcceleration = 0.00f;
    this->_aimOffsetYawAccelerationTime = 0.00f;
}

