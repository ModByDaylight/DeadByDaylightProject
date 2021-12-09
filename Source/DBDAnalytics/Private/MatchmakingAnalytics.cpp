#include "MatchmakingAnalytics.h"

FMatchmakingAnalytics::FMatchmakingAnalytics() {
    this->PlayerRole = EPlayerRole::VE_None;
    this->GameType = EGameType::Online;
    this->PartySize = 0;
    this->Rank = 0;
}

