#include "S28P02.h"

US28P02::US28P02() {
    this->_healingSpeedGainPercentage[0] = 0.00f;
    this->_healingSpeedGainPercentage[1] = 0.00f;
    this->_healingSpeedGainPercentage[2] = 0.00f;
    this->_canSelfHeal = true;
    this->_selfHealSpeedPenalty[0] = 0.00f;
    this->_selfHealSpeedPenalty[1] = 0.00f;
    this->_selfHealSpeedPenalty[2] = 0.00f;
}

