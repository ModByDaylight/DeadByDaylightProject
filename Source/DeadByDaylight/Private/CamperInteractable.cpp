#include "CamperInteractable.h"

class UInteractionDefinition;
class ACamperPlayer;

void ACamperInteractable::UpdateTargetHPSlot() {
}

void ACamperInteractable::SetKillInteraction(UInteractionDefinition* killInteraction) {
}

void ACamperInteractable::ServerMoveOut_Implementation() {
}
bool ACamperInteractable::ServerMoveOut_Validate() {
    return true;
}


ACamperPlayer* ACamperInteractable::GetOwningSurvivor() const {
    return NULL;
}

ACamperInteractable::ACamperInteractable() {
    this->_killInteractor = NULL;
    this->_killInteractionZone = NULL;
    this->_killHealthyInteractionZone = NULL;
}

