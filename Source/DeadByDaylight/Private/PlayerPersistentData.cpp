#include "PlayerPersistentData.h"

FPlayerPersistentData::FPlayerPersistentData() {
    this->GameRole = EPlayerRole::VE_None;
    this->PlayerPlatform = EPlatformFlag::None;
    this->PlayerProvider = EProviderFlag::None;
    this->_playerId = 0;
}

