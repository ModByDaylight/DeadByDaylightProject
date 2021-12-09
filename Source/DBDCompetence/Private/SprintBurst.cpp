#include "SprintBurst.h"

void USprintBurst::Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving) {
}

USprintBurst::USprintBurst() {
    this->_exhaustionDuration[0] = 0.00f;
    this->_exhaustionDuration[1] = 0.00f;
    this->_exhaustionDuration[2] = 0.00f;
    this->_sprintDuration = 0.00f;
    this->_exhaustedEffect = NULL;
}

