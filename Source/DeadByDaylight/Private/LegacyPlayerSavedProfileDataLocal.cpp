#include "LegacyPlayerSavedProfileDataLocal.h"

FLegacyPlayerSavedProfileDataLocal::FLegacyPlayerSavedProfileDataLocal() {
    this->Tokens = 0;
    this->FirstTimePlaying = false;
    this->HasBeenGivenKillerTutorialEndReward = false;
    this->HasBeenGivenSurvivorTutorialEndReward = false;
    this->Wins = 0;
    this->Losses = 0;
    this->CurrentSeasonTicks = 0;
    this->LastConnectedCharacterIndex = 0;
    this->_bloodpoints = 0;
    this->_bonusBloodpoints = 0;
    this->_unclampedBloodpoints = 0;
    this->_fearTokens = 0;
    this->_fearTokensMigrated = false;
}

