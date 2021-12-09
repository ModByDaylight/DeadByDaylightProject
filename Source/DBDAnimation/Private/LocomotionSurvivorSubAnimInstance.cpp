#include "LocomotionSurvivorSubAnimInstance.h"

ULocomotionSurvivorSubAnimInstance::ULocomotionSurvivorSubAnimInstance() {
    this->_isRecoveringWhileCrawling = false;
    this->_isTenacityPerkActive = false;
    this->_wasStandingResetTime = 0.10f;
    this->_wasRunningResetTime = 0.10f;
    this->_wasCrouchingResetTime = 0.10f;
    this->_wasMovingResetTime = 0.10f;
    this->_isIdle = false;
    this->_recentlyIdleCooldownTime = 0.10f;
    this->_recentlyNotIdleCooldownTime = 0.10f;
    this->_wasIdleRecently = false;
    this->_idleInterupt = false;
    this->_isAgainstSmallKiller = false;
    this->_isMoving = false;
    this->_wasRunning = false;
    this->_isRunning = false;
    this->_wasCrouching = false;
    this->_isCrouching = false;
    this->_wasStanding = false;
    this->_isStanding = false;
    this->_isCrawling = false;
    this->_isDead = false;
    this->_walkAnimSpeed = 0.00f;
    this->_walkAnimStartOffset = 0.00f;
    this->_walkAnimPlayRateMultiplier = 0.00f;
    this->_wasLastDamageSourceDeepWounds = false;
    this->_isStrafing = false;
    this->_isUsingDeadHard = false;
    this->_direction = 0.00f;
    this->_isUsingAimItem = false;
    this->_isBeingCarried = false;
    this->_isInDeathBed = false;
    this->_aimOffsetPitch = 0.00f;
    this->_turn180Active = false;
    this->_turningRight = false;
    this->_start180Active = false;
    this->_aimOffsetYawInterpolated = 0.00f;
    this->_allowLookAt = false;
    this->_isDrasticAimOffsetYawChangeDetected = false;
    this->_aimOffsetYawClampValue = 0.00f;
    this->_maxParadiseWalkCycleOffSet = 1.00f;
    this->_minParadiseWalkPlayRateMultiplier = 0.80f;
    this->_turn180DetectionPrecision = 45.00f;
    this->_turn180DetectionDeadZone = 0.75f;
    this->_turn180PrevVelocitiesCacheDuration = 0.32f;
    this->_minDurationBetweenTurn180Detection = 0.50f;
    this->_start180DetectionPrecision = 45.00f;
    this->_idleDurationFor180StartDetection = 0.30f;
    this->_durationBeforeStart180Reset = 0.10f;
}

