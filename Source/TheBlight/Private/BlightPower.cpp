#include "BlightPower.h"
#include "PowerChargeComponent.h"
#include "PowerToggleComponent.h"
#include "ChargeableComponent.h"

void ABlightPower::OnPowerStateChanged(const EWallGrabState previousState, const EWallGrabState newState) {
}

ABlightPower::ABlightPower() {
    this->_blightPowerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("K21PowerCharge"));
    this->_blightPowerToggle = CreateDefaultSubobject<UPowerToggleComponent>(TEXT("K21PowerToggle"));
    this->_blightPowerActivateChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("K21PowerActivateChargeable"));
    this->_blightPowerStateComponent = NULL;
}

