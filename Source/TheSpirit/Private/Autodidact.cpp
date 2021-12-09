#include "Autodidact.h"

UAutodidact::UAutodidact() {
    this->_maxTokenCountPerLevel[0] = 0;
    this->_maxTokenCountPerLevel[1] = 0;
    this->_maxTokenCountPerLevel[2] = 0;
    this->_progressionBonusPerToken = 0.00f;
    this->_initialSkillCheckProgressionPenalty = 0.00f;
}

