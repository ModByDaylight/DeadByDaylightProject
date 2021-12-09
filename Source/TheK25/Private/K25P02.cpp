#include "K25P02.h"
#include "Net/UnrealNetwork.h"

void UK25P02::OnRep_CursedSurvivors() {
}

void UK25P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK25P02, _cursedSurvivors);
}

UK25P02::UK25P02() {
    this->_totemAuraRevealRadius[0] = 0.00f;
    this->_totemAuraRevealRadius[1] = 0.00f;
    this->_totemAuraRevealRadius[2] = 0.00f;
    this->_totemBlockerHasLifetime = true;
    this->_totemBlockerDuration[0] = 0.00f;
    this->_totemBlockerDuration[1] = 0.00f;
    this->_totemBlockerDuration[2] = 0.00f;
}

