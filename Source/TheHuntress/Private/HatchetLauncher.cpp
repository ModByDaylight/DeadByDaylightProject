#include "HatchetLauncher.h"

bool UHatchetLauncher::IsLaunchedHatchetFullyCharged() const {
    return false;
}

UHatchetLauncher::UHatchetLauncher() {
    this->_angleOffsetCurve = NULL;
    this->_speedCurve = NULL;
    this->_hatchetSpeedWhenThrowFullyCharged = 6000.00f;
    this->_hatchetPitchCurve = NULL;
}

