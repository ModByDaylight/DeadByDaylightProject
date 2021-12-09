#include "Gearhead.h"
#include "Net/UnrealNetwork.h"

void UGearhead::OnRep_RevealedGenerators() {
}

void UGearhead::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGearhead, _numAttacksBeforeActivation);
    DOREPLIFETIME(UGearhead, _revealedGenerators);
}

UGearhead::UGearhead() {
    this->_perkActivationDuration[0] = 0.00f;
    this->_perkActivationDuration[1] = 0.00f;
    this->_perkActivationDuration[2] = 0.00f;
    this->_greatSkillCheck = false;
    this->_basicAttack = true;
    this->_minimumAuraRevealDuration = 0.00f;
    this->_attacksNeededToActivate = 0;
    this->_numAttacksBeforeActivation = 0;
}

