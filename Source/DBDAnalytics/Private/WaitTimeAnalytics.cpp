#include "WaitTimeAnalytics.h"

FWaitTimeAnalytics::FWaitTimeAnalytics() {
    this->EnterLobbyWaitTime = 0.00f;
    this->EnterMatchWaitTime = 0.00f;
    this->GameMode = EGameType::Online;
    this->Role = EPlayerRole::VE_None;
    this->PartySize = 0;
    this->Rank = 0;
    this->RankDifference = 0;
    this->DaysSinceReset = 0;
}

