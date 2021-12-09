#include "SearchChestInteractionBase.h"

class ADBDPlayer;

void USearchChestInteractionBase::FireChestScoreEvent(const ADBDPlayer* player) {
}

USearchChestInteractionBase::USearchChestInteractionBase() {
    this->_handleCompletionScoreEvents = true;
    this->_scoreEventFired = false;
    this->_owningChest = NULL;
    this->_onLastInteractionWasComplete = false;
}

