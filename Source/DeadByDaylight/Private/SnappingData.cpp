#include "SnappingData.h"

FSnappingData::FSnappingData() {
    this->DoSnapPosition = false;
    this->DoSnapRotation = false;
    this->DoSnapRoll = false;
    this->UseZCoord = false;
    this->SweepOnFinalSnap = false;
    this->Duration = 0.00f;
}

