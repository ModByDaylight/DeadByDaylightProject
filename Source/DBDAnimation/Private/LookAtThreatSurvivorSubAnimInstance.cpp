#include "LookAtThreatSurvivorSubAnimInstance.h"

ULookAtThreatSurvivorSubAnimInstance::ULookAtThreatSurvivorSubAnimInstance() {
    this->_maxDistanceForThreatDetection = 1000.00f;
    this->_headSocket = TEXT("joint_Head_01");
    this->_rootSocket = TEXT("joint_Char");
    this->_yawToThreat = 0.00f;
    this->_pitchToThreat = 0.00f;
    this->_isVisibleThreat = false;
}

