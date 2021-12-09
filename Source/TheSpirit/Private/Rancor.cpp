#include "Rancor.h"


float URancor::GetSurvivorRevealDuration() const {
    return 0.0f;
}

URancor::URancor() {
    this->_survivorRevealDuration = 0.00f;
    this->_killerRevealToObsessionDuration[0] = 0.00f;
    this->_killerRevealToObsessionDuration[1] = 0.00f;
    this->_killerRevealToObsessionDuration[2] = 0.00f;
}

