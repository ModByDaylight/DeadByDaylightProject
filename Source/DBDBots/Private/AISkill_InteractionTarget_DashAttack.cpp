#include "AISkill_InteractionTarget_DashAttack.h"

UAISkill_InteractionTarget_DashAttack::UAISkill_InteractionTarget_DashAttack() {
    this->DashAttackUnderMaxRange = 200.00f;
    this->DashAttackUnderMaxHalfAngle = 45.00f;
    this->ExpectedAttackType = EAttackType::VE_None;
}

