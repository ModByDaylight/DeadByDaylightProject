#include "PlayerSavedProfileDataLocal.h"

FPlayerSavedProfileDataLocal::FPlayerSavedProfileDataLocal() {
    this->Tokens = 0;
    this->ConsecutiveMatchStreak = 0;
    this->Wins = 0;
    this->Losses = 0;
    this->CurrentSeasonTicks = 0;
    this->LastConnectedCharacterIndex = 0;
    this->CrossplayAllowed = false;
    this->AutoDeclineFriendInvites = false;
    this->_hasBeenGivenKillerTutorialEndReward = false;
    this->_hasBeenGivenSurvivorTutorialEndReward = false;
    this->_hasSeenBloodpointsOnboardingCurrencyPopup = false;
    this->_hasSeenAuricCellsOnboardingCurrencyPopup = false;
    this->_hasSeenIridescentShardsOnboardingCurrencyPopup = false;
    this->_hasBeginnerTooltipsBeenDisabledAtLevel = false;
}

