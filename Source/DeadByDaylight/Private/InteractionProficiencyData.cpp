#include "InteractionProficiencyData.h"

FInteractionProficiencyData::FInteractionProficiencyData() {
    this->IsActive = false;
    this->Level = 0;
    this->ProficiencyType = EStatusEffectType::None;
    this->Value = 0.00f;
}

