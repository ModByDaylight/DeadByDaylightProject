#include "CharacterSlotData.h"

FCharacterSlotData::FCharacterSlotData() {
    this->CharacterIndex = 0;
    this->Level = 0;
    this->Prestige = 0;
    this->Difficulty = ECharacterDifficulty::VE_Easy;
    this->IsUnlocked = false;
    this->IsDLCPurchasable = false;
    this->ItemsOwned = 0;
    this->TotalItems = 0;
    this->ShowNew = false;
    this->IsDlcLockedKiller = false;
    this->IsEnabled = false;
    this->HasNonSelectedPerks = false;
    this->PlayerRole = EPlayerRole::VE_None;
}

