#include "DragonsGrip.h"

class ADBDPlayer;


void UDragonsGrip::Multicast_OnRevealSurvivor_Implementation(ADBDPlayer* survivor) {
}

UDragonsGrip::UDragonsGrip() {
    this->_kickedGenerator = NULL;
    this->_activationDuration[0] = 0.00f;
    this->_activationDuration[1] = 0.00f;
    this->_activationDuration[2] = 0.00f;
    this->_cooldownDuration[0] = 0.00f;
    this->_cooldownDuration[1] = 0.00f;
    this->_cooldownDuration[2] = 0.00f;
    this->_exposedEffectDuration[0] = 0.00f;
    this->_exposedEffectDuration[1] = 0.00f;
    this->_exposedEffectDuration[2] = 0.00f;
    this->_onlyExposeFirstSurvivor = true;
}

