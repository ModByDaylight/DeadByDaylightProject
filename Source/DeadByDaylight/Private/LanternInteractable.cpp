#include "LanternInteractable.h"

class ADBDPlayer;

void ALanternInteractable::SlasherDestroyLantern(ADBDPlayer* player) {
}

void ALanternInteractable::OnSlasherDestroyedLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALanternInteractable::OnCamperWasHooked(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALanternInteractable::OnCamperLeavingHook(FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}

void ALanternInteractable::OnBackToCollectableTimerEnd() {
}

ELanternState ALanternInteractable::GetLanternState() const {
    return ELanternState::Collectable;
}

void ALanternInteractable::CollectLight(ADBDPlayer* player) {
}

void ALanternInteractable::ChangeLanternState(ELanternState newLanternState) {
}

bool ALanternInteractable::CanBeDestroyed() const {
    return false;
}

bool ALanternInteractable::CanBeCollected() const {
    return false;
}

ALanternInteractable::ALanternInteractable() {
    this->_collectableClass = NULL;
}

