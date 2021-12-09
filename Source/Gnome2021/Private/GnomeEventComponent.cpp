#include "GnomeEventComponent.h"

void UGnomeEventComponent::Authority_OnEndGameStarted(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

UGnomeEventComponent::UGnomeEventComponent() {
    this->_interactionRespawnableTrigger = NULL;
    this->_timedRespawnableTrigger = NULL;
}

