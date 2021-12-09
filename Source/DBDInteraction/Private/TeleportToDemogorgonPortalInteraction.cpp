#include "TeleportToDemogorgonPortalInteraction.h"

class ASlasherPlayer;


void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(ASlasherPlayer* slasher) {
}

UTeleportToDemogorgonPortalInteraction::UTeleportToDemogorgonPortalInteraction() {
    this->_enterPortalPhaseDuration = 0.00f;
    this->_cancelTeleportingPhaseDuration = 0.10f;
    this->_portalTargetingComponent = NULL;
    this->_portalPlacerState = NULL;
    this->_startingPortal = NULL;
    this->_targetedPortal = NULL;
    this->_interactingPlayer = NULL;
    this->_huskRef = NULL;
    this->ClassToSpawnForHusk = NULL;
}

