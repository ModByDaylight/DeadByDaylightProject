#include "PlayerInfoData.h"

FPlayerInfoData::FPlayerInfoData() {
    this->CharacterLevel = 0;
    this->PrestigeLevel = 0;
    this->CanPrestige = false;
    this->PlayerLevel = 0;
    this->DevotionLevel = 0;
    this->PlayerRank = 0;
    this->ActivePips = 0;
    this->NumPipsToNextRank = 0;
    this->Ready = false;
    this->IsSlasher = false;
    this->ShowPortraitBorder = false;
    this->HasActiveSubscription = false;
}

