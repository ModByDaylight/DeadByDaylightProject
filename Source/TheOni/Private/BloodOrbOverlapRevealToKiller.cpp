#include "BloodOrbOverlapRevealToKiller.h"

class UTimerObject;

UTimerObject* UBloodOrbOverlapRevealToKiller::GetRevealTimer() const {
    return NULL;
}

UBloodOrbOverlapRevealToKiller::UBloodOrbOverlapRevealToKiller() {
    this->_revealTimer = NULL;
}

