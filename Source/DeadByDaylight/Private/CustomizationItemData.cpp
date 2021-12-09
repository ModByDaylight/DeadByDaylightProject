#include "CustomizationItemData.h"

FCustomizationItemData::FCustomizationItemData() {
    this->Category = ECustomizationCategory::None;
    this->PrestigeUlockLevel = 0;
    this->CharmCategory = ECharmCategory::None;
    this->IsInStore = false;
    this->IsInNonViolentBuild = false;
    this->IsAvailableInAtlantaBuild = false;
    this->PlatformExclusiveFlag = 0;
}

