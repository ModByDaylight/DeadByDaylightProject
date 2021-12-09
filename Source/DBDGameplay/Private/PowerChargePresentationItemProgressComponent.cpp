#include "PowerChargePresentationItemProgressComponent.h"

UPowerChargePresentationItemProgressComponent::UPowerChargePresentationItemProgressComponent() {
    this->_powerChargeComponent = NULL;
    this->_powerToggleComponent = NULL;
    this->_chargeReadyThreshold = 1.00f;
}

