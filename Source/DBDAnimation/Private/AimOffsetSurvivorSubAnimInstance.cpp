#include "AimOffsetSurvivorSubAnimInstance.h"

UAimOffsetSurvivorSubAnimInstance::UAimOffsetSurvivorSubAnimInstance() {
    this->_pitch = 0.00f;
    this->_yaw = 0.00f;
    this->_yawInterpolated = 0.00f;
    this->_allowLookAt = false;
    this->_isUsingAimItem = false;
    this->_isInjured = false;
    this->_isCrawling = false;
    this->_isIdle = false;
    this->_isDrasticYawChangeDetected = false;
    this->_yawInterpolationSpeed = 2.50f;
    this->_yawDeadzoneStart = 150.00f;
    this->_yawClampValue = 135.00f;
    this->_yawDrasticChangeUpperLimit = 100.00f;
    this->_yawDrasticChangeLowerLimit = 10.00f;
    this->_yawDrasticChangeInterpolationSpeed = 4.00f;
    this->_yawInterpolateEaseIn = NULL;
    this->_yawInterpolateEaseOut = NULL;
    this->_yawInterpolationEaseInLength = 0.50f;
    this->_yawInterpolationEaseOutDistance = 10.00f;
    this->_isYawInDeadZone = false;
    this->_currentTargetYaw = 0.00f;
    this->_yawAcceleration = 0.00f;
    this->_yawAccelerationTime = 0.00f;
}

