#include "ThrowInteraction.h"

void UThrowInteraction::InitThrowCancellationExitTime(float value) {
}

bool UThrowInteraction::HasCancelledThrow() const {
    return false;
}

UThrowInteraction::UThrowInteraction() {
    this->_throwCancelledSpeedCurve = NULL;
    this->_throwCancellationExitTime = 0.00f;
}

