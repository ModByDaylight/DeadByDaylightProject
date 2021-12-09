#include "BloodPact.h"

void UBloodPact::Authority_OnInRangeChanged(const bool inRange) {
}

UBloodPact::UBloodPact() {
    this->_dyingToInjured = true;
    this->_fullHealthStateOnly = false;
    this->_hasteEffectRange = 1600.00f;
    this->_hasteEffectMovementSpeedIncrease[0] = 0.00f;
    this->_hasteEffectMovementSpeedIncrease[1] = 0.00f;
    this->_hasteEffectMovementSpeedIncrease[2] = 0.00f;
    this->_ownerStatusEffect = NULL;
    this->_obsessionStatusEffect = NULL;
    this->_ownerHasteStatusEffect = NULL;
    this->_otherPlayerHasteStatusEffect = NULL;
    this->_otherPlayer = NULL;
}

