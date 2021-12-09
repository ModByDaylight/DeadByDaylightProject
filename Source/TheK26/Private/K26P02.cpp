#include "K26P02.h"

class AGenerator;

void UK26P02::Multicast_TriggerPerk_Implementation(AGenerator* explodingGenerator) {
}

float UK26P02::GetScreamRevealLocationDuration() const {
    return 0.0f;
}


void UK26P02::Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData) {
}

UK26P02::UK26P02() {
    this->_generatorRegressPercentage[0] = 0.00f;
    this->_generatorRegressPercentage[1] = 0.00f;
    this->_generatorRegressPercentage[2] = 0.00f;
    this->_screamRevealLocationDuration = 0.00f;
}

