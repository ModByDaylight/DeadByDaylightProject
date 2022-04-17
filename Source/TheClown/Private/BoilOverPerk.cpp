#include "BoilOverPerk.h"

class ADBDPlayer;

void UBoilOverPerk::Authority_OnWiggleEnd() {
}

void UBoilOverPerk::Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker) {
}

UBoilOverPerk::UBoilOverPerk() {
    this->_additionnalWigglingProgressWhenFalling[0] = 0.00f;
    this->_additionnalWigglingProgressWhenFalling[1] = 0.00f;
    this->_additionnalWigglingProgressWhenFalling[2] = 0.00f;
    this->_greatHeightsValue = 100.00f;
}

