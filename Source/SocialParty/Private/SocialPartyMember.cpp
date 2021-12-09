#include "SocialPartyMember.h"

FSocialPartyMember::FSocialPartyMember() {
    this->_playerRank = 0;
    this->_characterLevel = 0;
    this->_prestigeLevel = 0;
    this->_gameRole = 0;
    this->_characterId = 0;
    this->_location = 0;
    this->_ready = false;
    this->_crossplayAllowed = false;
    this->_postMatchmakingRole = EPartyPostMatchmakingRole::None;
    this->_postMatchmakingState = EPartyPostMatchmakingState::None;
    this->_roleRequested = 0;
    this->_isStateInitialized = false;
    this->_disconnectionPenaltyEndOfBan = 0;
}

