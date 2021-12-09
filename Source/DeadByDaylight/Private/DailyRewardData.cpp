#include "DailyRewardData.h"

FDailyRewardData::FDailyRewardData() {
    this->RewardType = EAtlantaRewardType::Item;
    this->CurrencyAmount = 0;
    this->Index = 0;
    this->IsMarkedSpecial = false;
    this->ItemRarity = EItemRarity::Common;
    this->State = EUMGDailyRewardWidgetState::Unknown;
}

