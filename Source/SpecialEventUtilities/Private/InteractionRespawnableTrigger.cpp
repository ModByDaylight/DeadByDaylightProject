#include "InteractionRespawnableTrigger.h"

class ARespawnableInteractable;

void UInteractionRespawnableTrigger::Authority_OnNewRespawnableSubscribed(ARespawnableInteractable* newRespawnableInteractable) {
}

void UInteractionRespawnableTrigger::Authority_OnInteractionEnded(ARespawnableInteractable* respawnableInteractable) {
}

UInteractionRespawnableTrigger::UInteractionRespawnableTrigger() {
    this->_respawningEventComponent = NULL;
}

