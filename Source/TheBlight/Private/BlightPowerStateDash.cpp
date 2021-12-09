#include "BlightPowerStateDash.h"

UBlightPowerStateDash::UBlightPowerStateDash() {
    this->_noDashTimeLimitSpeedCurve = NULL;
    this->_lookAngleToTurnRateCurveController = NULL;
    this->_lookAngleToTurnRateCurveMouse = NULL;
    this->_lookAngleToMaxTurnRateCurveMouse = NULL;
}

