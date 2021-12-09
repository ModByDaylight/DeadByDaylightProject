#include "SaveDataV7.h"

FSaveDataV7::FSaveDataV7() {
    this->SelectedCamperIndex = 0;
    this->SelectedSlasherIndex = 0;
    this->FirstTimePlaying = false;
    this->ConsecutiveMatchStreak = 0;
    this->HasBeenGivenKillerTutorialEndReward = false;
    this->HasBeenGivenSurvivorTutorialEndReward = false;
    this->HasSeenBloodpointsOnboardingCurrencyPopup = false;
    this->HasSeenAuricCellsOnboardingCurrencyPopup = false;
    this->HasSeenIridescentShardsOnboardingCurrencyPopup = false;
    this->CurrentSeasonTicks = 0;
    this->LastConnectedCharacterIndex = 0;
    this->Experience = 0;
    this->BonusExperience = 0;
    this->FearTokens = 0;
    this->FearTokensMigrated = false;
    this->CumulativeMatches = 0;
    this->CumulativeMatchesAsSurvivor = 0;
    this->CumulativeMatchesAsKiller = 0;
    this->CumulativeMatchesAsSurvivorNoFriends = 0;
    this->CumulativeMatchesAsKillerNoFriends = 0;
    this->CumulativeSessions = 0;
    this->IsCrossplayAllowed = false;
    this->AutoDeclineFriendInvites = false;
}

