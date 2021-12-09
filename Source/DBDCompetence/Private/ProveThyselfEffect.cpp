#include "ProveThyselfEffect.h"

class ACamperPlayer;

void UProveThyselfEffect::OnInRangeOfOriginatorChanged(const bool inRange, ACamperPlayer* survivor) {
}

UProveThyselfEffect::UProveThyselfEffect() {
    this->_speedPercentageAddedPerSurvivorRepairingInRange = 0.00f;
}

