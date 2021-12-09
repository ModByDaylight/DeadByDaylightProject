#include "PartyMatchmakingSettings.h"

FPartyMatchmakingSettings::FPartyMatchmakingSettings() {
    this->_matchmakingState = EMatchmakingState::None;
    this->_startMatchmakingDateTimestamp = 0;
    this->_isInFinalCountdown = false;
}

