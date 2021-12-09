#include "BalancedLanding.h"

void UBalancedLanding::Server_WarnBalancedLandingPredicted_Implementation() {
}

void UBalancedLanding::Client_UnvalidateBalanceLanding_Implementation() {
}

UBalancedLanding::UBalancedLanding() {
    this->_sprintDuration = 3.00f;
    this->_exhaustionDurationPerLevel[0] = 0.00f;
    this->_exhaustionDurationPerLevel[1] = 0.00f;
    this->_exhaustionDurationPerLevel[2] = 0.00f;
    this->_exhaustedEffect = NULL;
}

