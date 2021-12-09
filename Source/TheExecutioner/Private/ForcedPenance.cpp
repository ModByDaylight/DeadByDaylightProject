#include "ForcedPenance.h"
#include "Net/UnrealNetwork.h"

void UForcedPenance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UForcedPenance, _camperObliviousEffects);
    DOREPLIFETIME(UForcedPenance, _camperBrokenEffects);
}

UForcedPenance::UForcedPenance() {
    this->_perkActivationDuration[0] = 0.00f;
    this->_perkActivationDuration[1] = 0.00f;
    this->_perkActivationDuration[2] = 0.00f;
    this->_applyOblivious = true;
    this->_applyBroken = false;
}

