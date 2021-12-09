#include "OfferingSequenceManager.h"

void AOfferingSequenceManager::FadeInScreen() {
}

AOfferingSequenceManager::AOfferingSequenceManager() {
    this->_gameInstance = NULL;
    this->_localPlayerController = NULL;
    this->_offeringHandler = NULL;
    this->_sequenceAssets = NULL;
    this->_hud = NULL;
    this->_offeringCamera = NULL;
}

