#include "Surge.h"

class AGenerator;

void USurge::Client_TriggerEffects_Implementation(const TArray<AGenerator*>& generators) {
}

USurge::USurge() {
    this->_zoneRadius[0] = 0.00f;
    this->_zoneRadius[1] = 0.00f;
    this->_zoneRadius[2] = 0.00f;
    this->_instantRegression[0] = 0.00f;
    this->_instantRegression[1] = 0.00f;
    this->_instantRegression[2] = 0.00f;
    this->_cooldownDuration[0] = 0.00f;
    this->_cooldownDuration[1] = 0.00f;
    this->_cooldownDuration[2] = 0.00f;
    this->_hasCooldown = true;
    this->_useTerrorRadiusInsteadOfFixedDistance = false;
}

