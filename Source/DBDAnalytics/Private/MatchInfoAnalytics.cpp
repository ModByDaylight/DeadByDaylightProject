#include "MatchInfoAnalytics.h"

FMatchInfoAnalytics::FMatchInfoAnalytics() {
    this->GameMode = EGameType::Online;
    this->Role = EPlayerRole::VE_None;
    this->IsABot = false;
    this->BotDifficultyLevel = EAIDifficultyLevel::VeryEasy;
    this->PartySize = 0;
    this->Rank = 0;
    this->Level = 0;
    this->Prestige = 0;
    this->Pips = 0;
    this->PipsTotal = 0;
    this->MapSeed = 0;
    this->FirstTimePlaying = false;
    this->CumulativeMatches = 0;
    this->CumulativeMatchesAsSurvivor = 0;
    this->CumulativeMatchesAsKiller = 0;
    this->ExactPing = 0.00f;
    this->hasAnActiveArchiveQuest = false;
    this->archiveQuestCanProgress = false;
    this->IsUsingKeyboard = false;
    this->IsTutorialBotMatch = false;
}

