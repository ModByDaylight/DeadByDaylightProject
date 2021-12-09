#include "LegIKSurvivorSubAnimInstance.h"

ULegIKSurvivorSubAnimInstance::ULegIKSurvivorSubAnimInstance() {
    this->_isIdle = false;
    this->_isCrouched = false;
    this->AnimCollection = NULL;
    this->_pelvisOffsetTreshold = 15.00f;
    this->_pelvisOffsetInterpolationSpeed = 60.00f;
    this->_footOffsetInterpolationSpeed = 60.00f;
    this->_leftFootGroundDetector = NULL;
    this->_rightFootGroundDetector = NULL;
    this->maxLocalHeightForPlanting = 15.00f;
    this->_locomotionPredictor = NULL;
}

