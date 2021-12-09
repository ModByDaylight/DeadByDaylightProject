#include "AISkill.h"

UAISkill::UAISkill() {
    this->StopIfPausedByNavLinkProxy = false;
    this->RunTimeLimit = -1.00f;
    this->RunCooldownTime = -1.00f;
    this->RunCooldownTimeDeviation = 0.00f;
    this->SkillNavigationFilterClass = NULL;
    this->DynamicSubtree = NULL;
    this->_aiControllerOwner = NULL;
}

