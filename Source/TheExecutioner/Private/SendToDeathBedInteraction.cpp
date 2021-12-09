#include "SendToDeathBedInteraction.h"

class ADeathBedInteractable;
class ACamperPlayer;

void USendToDeathBedInteraction::Multicast_SendCamperToDeathBed_Implementation(ADeathBedInteractable* deathBed) {
}

ACamperPlayer* USendToDeathBedInteraction::GetOwningSurvivor() const {
    return NULL;
}



USendToDeathBedInteraction::USendToDeathBedInteraction() {
    this->_deathBed = NULL;
}

