#include "SocialPartyState.h"

FSocialPartyState::FSocialPartyState() {
    this->_gameType = 0;
    this->_isCrowdPlay = false;
    this->_isUsingDedicatedServer = false;
    this->_lastUpdatedTime = 0;
    this->_lastSentTime = 0;
}

