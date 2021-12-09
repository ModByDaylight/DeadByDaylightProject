#include "ZombieAttractedByGeneratorBTService.h"

class AGenerator;

void UZombieAttractedByGeneratorBTService::OnInRangeChanged(const bool inRange, AGenerator* generator) {
}

UZombieAttractedByGeneratorBTService::UZombieAttractedByGeneratorBTService() {
    this->_genRepairingHearingRange = 500.00f;
}

