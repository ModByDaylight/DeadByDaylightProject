#include "Gearhead.h"

UGearhead::UGearhead() {
    this->_perkActivationDuration[0] = 0.00f;
    this->_perkActivationDuration[1] = 0.00f;
    this->_perkActivationDuration[2] = 0.00f;
    this->_skillCheckType = ESkillCheckType::NONE;
    this->_basicAttack = true;
}

