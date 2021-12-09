#include "Unhook.h"

UUnhook::UUnhook() {
    this->_unhookingPlayer = NULL;
    this->_hookedCharacterSnapTime = 0.25f;
    this->_playerBeingUnhooked = NULL;
}

