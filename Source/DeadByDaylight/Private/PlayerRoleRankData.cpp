#include "PlayerRoleRankData.h"

FPlayerRoleRankData::FPlayerRoleRankData() {
    this->PlayerRole = EPlayerRole::VE_None;
    this->Rank = 0;
    this->PipsRequiredForNextRank = 0;
    this->ActivePips = 0;
}

