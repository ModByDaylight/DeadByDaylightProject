#include "PerkProperties.h"

FPerkProperties::FPerkProperties() {
    this->AssociatedPlayerIndex = 0;
    this->MandatoryOnBloodweblevel = 0;
    this->TeachableOnBloodweblevel = 0;
    this->AtlantaTeachableLevel = 0;
    this->AtlantaLowPriority = false;
    this->PerkLevelRarity.AddDefaulted(3);
}

