#include "ArmDetectionFanComponent.h"

UArmDetectionFanComponent::UArmDetectionFanComponent() {
    this->_shoulderBone = TEXT("joint_ShoulderRT_01");
    this->_elbowBone = TEXT("joint_ElbowRT_01");
    this->_handBone = TEXT("joint_HandRT_01");
    this->_indexBone = TEXT("joint_IndexART_01");
    this->_hipBone = TEXT("joint_HipRT_01");
}

