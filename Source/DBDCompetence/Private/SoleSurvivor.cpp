#include "SoleSurvivor.h"

class ACamperPlayer;

void USoleSurvivor::Authority_OnSurvivorAdded(const ACamperPlayer* survivor) {
}

USoleSurvivor::USoleSurvivor() {
    this->_auraHideDistancePerDeadOrDisconnectedSurvivor[0] = 0.00f;
    this->_auraHideDistancePerDeadOrDisconnectedSurvivor[1] = 0.00f;
    this->_auraHideDistancePerDeadOrDisconnectedSurvivor[2] = 0.00f;
}

