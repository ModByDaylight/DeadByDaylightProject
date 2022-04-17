#include "Overcome.h"

UOvercome::UOvercome() {
    this->_exhaustionDuration[0] = 0.00f;
    this->_exhaustionDuration[1] = 0.00f;
    this->_exhaustionDuration[2] = 0.00f;
    this->_damageStateChangedTimeLimit = 1.00f;
    this->_exhaustedEffect = NULL;
}

