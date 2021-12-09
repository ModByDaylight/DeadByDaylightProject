#include "SpiritHuskActivePhaseWalkAnimInstance.h"

USpiritHuskActivePhaseWalkAnimInstance::USpiritHuskActivePhaseWalkAnimInstance() {
    this->_elapsedTimeSinceFakingRealKillerPose = 0.00f;
    this->_idleAnimationExplicitTime = 0.00f;
    this->_idleAnimationSequence = NULL;
}

