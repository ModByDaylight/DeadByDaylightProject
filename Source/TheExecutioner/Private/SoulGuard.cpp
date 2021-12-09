#include "SoulGuard.h"


void USoulGuard::Authority_OnSurvivorHealed(const FCamperHealResult& healResult) {
}

USoulGuard::USoulGuard() {
    this->_cooldownLevels[0] = 0.00f;
    this->_cooldownLevels[1] = 0.00f;
    this->_cooldownLevels[2] = 0.00f;
    this->_recover = true;
    this->_enduranceEffectDuration[0] = 0.00f;
    this->_enduranceEffectDuration[1] = 0.00f;
    this->_enduranceEffectDuration[2] = 0.00f;
}

