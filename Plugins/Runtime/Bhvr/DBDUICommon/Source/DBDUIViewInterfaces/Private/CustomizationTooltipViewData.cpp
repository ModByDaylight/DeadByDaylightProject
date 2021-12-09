#include "CustomizationTooltipViewData.h"

FCustomizationTooltipViewData::FCustomizationTooltipViewData() {
    this->IsLocked = false;
    this->IsUnbreakable = false;
    this->IsEquipped = false;
    this->IsOwned = false;
    this->AssociatedRole = EPlayerRole::VE_None;
    this->Rarity = EItemRarity::Common;
    this->IsEnabled = false;
}

