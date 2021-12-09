#include "Counterforce.h"

class ATotem;

void UCounterforce::Multicast_ShowTotemAura_Implementation(ATotem* totem) {
}

UCounterforce::UCounterforce() {
    this->_totemAuraVisibleDuration[0] = 0.00f;
    this->_totemAuraVisibleDuration[1] = 0.00f;
    this->_totemAuraVisibleDuration[2] = 0.00f;
    this->_startingTotemCleanseSpeedBonus[0] = 0.00f;
    this->_startingTotemCleanseSpeedBonus[1] = 0.00f;
    this->_startingTotemCleanseSpeedBonus[2] = 0.00f;
    this->_stackableTotemCleanseSpeedBonus[0] = 0.00f;
    this->_stackableTotemCleanseSpeedBonus[1] = 0.00f;
    this->_stackableTotemCleanseSpeedBonus[2] = 0.00f;
}

