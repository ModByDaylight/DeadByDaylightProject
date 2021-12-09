#include "ArmIKSurvivorSubAnimInstance.h"

void UArmIKSurvivorSubAnimInstance::ChangeMode(const EArmIkMode newMode) {
}

UArmIKSurvivorSubAnimInstance::UArmIKSurvivorSubAnimInstance() {
    this->_armInterpolationSpeed = 10.00f;
    this->_handInterpolationSpeed = 10.00f;
    this->_alphaLerpTime = 0.35f;
    this->_reachPadding = 2.00f;
    this->_rightArmIKAlpha = 0.00f;
    this->_leftArmIKAlpha = 0.00f;
    this->_armIkMode = EArmIkMode::BothHand;
    this->_rightDetectionFan = NULL;
    this->_leftDetectionFan = NULL;
    this->_meshComponent = NULL;
}

