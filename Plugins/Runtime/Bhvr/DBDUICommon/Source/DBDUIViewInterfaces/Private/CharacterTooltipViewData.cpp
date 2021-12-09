#include "CharacterTooltipViewData.h"

FCharacterTooltipViewData::FCharacterTooltipViewData() {
    this->Level = 0;
    this->Prestige = 0;
    this->IsUnlocked = false;
    this->IsNewInStore = false;
    this->IsOwned = false;
    this->IsAvailableInStore = false;
    this->IsDLCPurchasable = false;
    this->Difficulty = ECharacterDifficulty::VE_Easy;
    this->IsEnabled = false;
}

