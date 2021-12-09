#include "k24PowerCooldownInteraction.h"

class AK24Power;

void Uk24PowerCooldownInteraction::SetK24Power(AK24Power* k24Power) {
}

Uk24PowerCooldownInteraction::Uk24PowerCooldownInteraction() {
    this->_cooldownSpeedCurve = NULL;
    this->_cooldownLvl3SpeedCurve = NULL;
    this->_playedCooldownSpeedCurve = NULL;
}

