#include "ConjoinedTwinInteractable.h"
#include "ChargeableComponent.h"

AConjoinedTwinInteractable::AConjoinedTwinInteractable() {
    this->_possessKillerChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("PossessKillerChargeable"));
    this->_chargeTwinJumpChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("ChargeTwinJumpChargeable"));
    this->_removeTwinChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("RemoveTwinChargeable"));
    this->_destroyTwinChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("DestroyTwinChargeable"));
}

