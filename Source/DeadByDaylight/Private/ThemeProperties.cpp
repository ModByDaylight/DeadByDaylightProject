#include "ThemeProperties.h"

FThemeProperties::FThemeProperties() {
    this->ThemeNumber = 0;
    this->ThemeColorId = EThemeColorId::Invalid;
    this->ThemeSelectionOfferingEffectType = EOfferingEffectType::SlasherPointsAll;
    this->Blackboard = NULL;
    this->Gesture = false;
}

