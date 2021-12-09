#include "Deception.h"


UDeception::UDeception() {
    this->_noScratchMarksDuration[0] = 0.00f;
    this->_noScratchMarksDuration[1] = 0.00f;
    this->_noScratchMarksDuration[2] = 0.00f;
    this->_perkCooldownDuration[0] = 0.00f;
    this->_perkCooldownDuration[1] = 0.00f;
    this->_perkCooldownDuration[2] = 0.00f;
    this->_statusEffect = NULL;
    this->_iconStrategy = NULL;
}

