#include "SmallGame.h"



void USmallGame::Multicast_TotemFound_Implementation() {
}

float USmallGame::GetDetectionConeAngle() const {
    return 0.0f;
}

void USmallGame::Authority_SetTotemDetected(bool value) {
}

USmallGame::USmallGame() {
    this->_detectionConeAngle[0] = 0.00f;
    this->_detectionConeAngle[1] = 0.00f;
    this->_detectionConeAngle[2] = 0.00f;
    this->_detectionConeAngleReductionRate[0] = 0.00f;
    this->_detectionConeAngleReductionRate[1] = 0.00f;
    this->_detectionConeAngleReductionRate[2] = 0.00f;
    this->_totemDetected = false;
}

