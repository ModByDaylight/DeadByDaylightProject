#include "PreLevelGenerationModifierProperties.h"

FPreLevelGenerationModifierProperties::FPreLevelGenerationModifierProperties() {
    this->ModifierType = EPreLevelGenerationModifierType::None;
    this->KillerAbiliy = EKillerAbilities::VE_None;
    this->ModifierValue = 0.00f;
}

