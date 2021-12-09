#include "ChainsawRevInteraction.h"

void UChainsawRevInteraction::OnLevelReadyToPlay() {
}

UChainsawRevInteraction::UChainsawRevInteraction() {
    this->_chainsawRevStartAkAudioEvent = NULL;
    this->_chainsawRevEndAkAudioEvent = NULL;
    this->_owningSlasher = NULL;
}

