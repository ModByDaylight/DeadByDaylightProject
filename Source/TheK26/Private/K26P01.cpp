#include "K26P01.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UK26P01::OnRep_BlockedGenerators() {
}

void UK26P01::Authority_OnBlockTimerDone(AGenerator* generator) {
}

void UK26P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK26P01, _blockedGenerators);
}

UK26P01::UK26P01() {
    this->_generatorBlockDuration[0] = 0.00f;
    this->_generatorBlockDuration[1] = 0.00f;
    this->_generatorBlockDuration[2] = 0.00f;
    this->_auraRevealDuration[0] = 0.00f;
    this->_auraRevealDuration[1] = 0.00f;
    this->_auraRevealDuration[2] = 0.00f;
    this->_survivorsToBeHooked = 0;
}

