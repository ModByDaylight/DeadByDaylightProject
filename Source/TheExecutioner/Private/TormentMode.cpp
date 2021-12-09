#include "TormentMode.h"

void ATormentMode::Server_RequestMoreActorInAttackPool_Implementation() {
}
bool ATormentMode::Server_RequestMoreActorInAttackPool_Validate() {
    return true;
}



void ATormentMode::OnTormentModeChargeEmpty() {
}

bool ATormentMode::IsInTormentMode() const {
    return false;
}

ATormentMode::ATormentMode() {
    this->_agonyComponentClass = NULL;
    this->_killerTormentTrailDetectorClass = NULL;
    this->_survivorTormentTrailDetectorClass = NULL;
    this->_tormentModeCooldownInteraction = NULL;
    this->_tormentModeChargeSpeedCurve = NULL;
    this->_mobileTormentTrailRendererClass = NULL;
}

