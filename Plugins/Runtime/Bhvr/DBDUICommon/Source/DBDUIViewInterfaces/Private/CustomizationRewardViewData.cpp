#include "CustomizationRewardViewData.h"

FCustomizationRewardViewData::FCustomizationRewardViewData() {
    this->IconTexture = NULL;
    this->Rarity = EItemRarity::Common;
    this->IsOwned = false;
    this->IsEquipped = false;
    this->IsUnbreakable = false;
    this->IsEnabled = false;
}

