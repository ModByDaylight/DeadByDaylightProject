#include "PerspectiveEffectData.h"

FPerspectiveEffectData::FPerspectiveEffectData() {
    this->WantsActive = false;
    this->Condition = EPerspectiveActivationCondition::LocallyControlled;
}

