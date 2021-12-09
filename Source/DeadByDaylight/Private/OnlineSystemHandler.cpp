#include "OnlineSystemHandler.h"

UOnlineSystemHandler::UOnlineSystemHandler() {
    this->_cachedLocalPlayer = NULL;
    this->_gameInstance = NULL;
    this->_gameSessionDS = NULL;
    this->_serverInstance = NULL;
    this->_crossPlatformManager = NULL;
}

