#include "TallyPlayerResultData.h"

FTallyPlayerResultData::FTallyPlayerResultData() {
    this->PlayerScore = 0;
    this->PlayerRank = 0;
    this->PlayerStatus = EGameState::VE_Active;
    this->IsReported = false;
    this->IsSlasher = false;
    this->IsMyScore = false;
    this->IsOffNetwork = false;
    this->ShowPortraitBorder = false;
    this->IsABot = false;
}

