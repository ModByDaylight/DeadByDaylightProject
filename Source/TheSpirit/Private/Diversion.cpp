#include "Diversion.h"

void UDiversion::Authority_OnOwningSurvivorImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState) {
}

void UDiversion::Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

UDiversion::UDiversion() {
    this->_diversionActivationTimePerLevel[0] = 0.00f;
    this->_diversionActivationTimePerLevel[1] = 0.00f;
    this->_diversionActivationTimePerLevel[2] = 0.00f;
    this->_throwPebbleDistance = 20.00f;
}

