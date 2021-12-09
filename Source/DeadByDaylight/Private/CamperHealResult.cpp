#include "CamperHealResult.h"

FCamperHealResult::FCamperHealResult() {
    this->PreviousDamageState = ECamperDamageState::VE_Healthy;
    this->CurrentDamageState = ECamperDamageState::VE_Healthy;
    this->HealAmount = 0;
}

