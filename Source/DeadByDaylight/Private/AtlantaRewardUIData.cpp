#include "AtlantaRewardUIData.h"

FAtlantaRewardUIData::FAtlantaRewardUIData() {
    this->Type = EAtlantaRewardType::Item;
    this->Quantity = 0;
    this->Currency = ECurrencyType::None;
    this->Rarity = EItemRarity::Common;
}

