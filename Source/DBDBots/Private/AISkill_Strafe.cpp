#include "AISkill_Strafe.h"

UAISkill_Strafe::UAISkill_Strafe() {
    this->StartMaxRange = 200.00f;
    this->StopMaxRange = 300.00f;
    this->StrafeBackwardRange = 0.00f;
    this->StrafeFowardRange = 450.00f;
    this->IgnoreUnderNavLinkStartRange = 300.00f;
    this->PauseStrafeOnAnimation = true;
}

