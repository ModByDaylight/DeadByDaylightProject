#include "PlayerRoundStartEventData.h"

FPlayerRoundStartEventData::FPlayerRoundStartEventData() {
    this->PlayerRole = EPlayerRole::VE_None;
    this->IsABot = false;
    this->BotDifficultyLevel = EAIDifficultyLevel::VeryEasy;
    this->CharacterId = 0;
    this->PlayerRankForRole = 0;
    this->PrestigeLevel = 0;
    this->BloodWebLevel = 0;
    this->Pips = 0;
}

