#include "RespawningEventComponent.h"

class ARespawnableInteractable;

void URespawningEventComponent::DBD_ForceRespawnSpecialEventObject() {
}

void URespawningEventComponent::Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting) {
}

URespawningEventComponent::URespawningEventComponent() {
    this->_respawnableStrategy = NULL;
    this->_respawnablePositioner = NULL;
}

