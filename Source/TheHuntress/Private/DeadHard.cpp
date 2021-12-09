#include "DeadHard.h"

UDeadHard::UDeadHard() {
    this->_deadHardIconCooldownDuration = 0.50f;
    this->_exhaustedEffect = NULL;
    this->_exhaustedCooldownPerLevel[0] = 0.00f;
    this->_exhaustedCooldownPerLevel[1] = 0.00f;
    this->_exhaustedCooldownPerLevel[2] = 0.00f;
}

