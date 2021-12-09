#include "SingleGateBlockerEffect.h"
#include "Net/UnrealNetwork.h"

void USingleGateBlockerEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USingleGateBlockerEffect, _isInRange);
}

USingleGateBlockerEffect::USingleGateBlockerEffect() {
    this->_distanceThreshold = 0.00f;
    this->_gate = NULL;
    this->_isInRange = false;
}

