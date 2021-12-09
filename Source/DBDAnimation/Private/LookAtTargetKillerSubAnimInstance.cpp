#include "LookAtTargetKillerSubAnimInstance.h"

class ADBDPlayer;

void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(ADBDPlayer* target) {
}

void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(ADBDPlayer* target, float chaseTime) {
}

ULookAtTargetKillerSubAnimInstance::ULookAtTargetKillerSubAnimInstance() {
    this->_maxDistanceForTargetDetection = 1000.00f;
    this->_headSocket = TEXT("joint_Head_01");
    this->_rootSocket = TEXT("joint_Char");
    this->_preferredMinLookAtTime = 2.00f;
    this->_distanceScoreFactor = 1.00f;
    this->_angleScoreFactor = 2.00f;
    this->_sameTargetScoreFactor = 2.00f;
    this->_yawToTarget = 0.00f;
    this->_pitchToTarget = 0.00f;
    this->_hasVisibleTarget = false;
}

