#include "ThrillingTremors.h"
#include "Net/UnrealNetwork.h"

void UThrillingTremors::OnRep_BlockedGenerators() {
}

void UThrillingTremors::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UThrillingTremors, _blockedGenerators);
}

UThrillingTremors::UThrillingTremors() {
    this->_cooldownByLevel[0] = 0;
    this->_cooldownByLevel[1] = 0;
    this->_cooldownByLevel[2] = 0;
    this->_durationByLevel[0] = 0.00f;
    this->_durationByLevel[1] = 0.00f;
    this->_durationByLevel[2] = 0.00f;
    this->_disableWhenSurvivorPutDownOrUnhooked = true;
}

