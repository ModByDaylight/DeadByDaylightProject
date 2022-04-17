#include "PlayerStateData.h"

FPlayerStateData::FPlayerStateData() {
    this->CharacterLevel = 0;
    this->_playerGameState = EGameState::VE_Active;
    this->_isEscapeHatch = false;
    this->_prestigeLevel = 0;
}

