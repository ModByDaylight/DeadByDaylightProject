#include "AISkill_InteractionTeleportEthereal.h"

UAISkill_InteractionTeleportEthereal::UAISkill_InteractionTeleportEthereal() {
    this->TeleportPlanInterval = 2.00f;
    this->MaxTeleportAlignHalfAngle = 45.00f;
    this->AbortNotWorkingTeleportDelay = 2.00f;
    this->AbortAddRunCooldownPenaltyTime = 12.00f;
    this->_onStimulusInstigator = NULL;
}

