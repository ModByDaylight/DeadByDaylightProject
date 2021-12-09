#include "DBDRichPresenceSubsystem.h"

UDBDRichPresenceSubsystem::UDBDRichPresenceSubsystem() {
    this->_userType = ERichPresenceUserType::Player;
    this->_richPresenceStatus = ERichPresenceStatus::Offline;
    this->_timerRate = 30.00f;
    this->_timerDelay = 10.00f;
    this->_isValidSetup = false;
}

