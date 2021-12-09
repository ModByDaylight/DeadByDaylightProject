#include "DyingLight.h"

class ACamperPlayer;

void UDyingLight::OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession) {
}

UDyingLight::UDyingLight() {
    this->_obsessionActionSpeedBonus = 0.00f;
}

