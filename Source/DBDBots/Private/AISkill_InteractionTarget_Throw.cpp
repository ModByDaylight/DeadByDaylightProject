#include "AISkill_InteractionTarget_Throw.h"

UAISkill_InteractionTarget_Throw::UAISkill_InteractionTarget_Throw() {
    this->ThrowPredictionMode = EAIThrowPredictionModes::FindBestThrowPowerRatio;
    this->MaxAddPitchAngle = 10;
    this->ThrowProjectileMode = EAIThrowProjectileModes::OneShot;
}

