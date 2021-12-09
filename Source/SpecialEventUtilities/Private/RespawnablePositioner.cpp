#include "RespawnablePositioner.h"

class ARespawnableInteractable;

void URespawnablePositioner::Authority_OnIsInteractingChangedEvent(ARespawnableInteractable* respawnableInteractable, bool isInteracting) {
}

TArray<ARespawnableInteractable*> URespawnablePositioner::Authority_GetRespawnables() const {
    return TArray<ARespawnableInteractable*>();
}

URespawnablePositioner::URespawnablePositioner() {
}

