#include "InnerStrength.h"
#include "Net/UnrealNetwork.h"

void UInnerStrength::OnRep_PerkEnabled() {
}

void UInnerStrength::OnPlayerImmobilizeStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState) {
}

void UInnerStrength::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInnerStrength, _perkEnabled);
}

UInnerStrength::UInnerStrength() {
    this->_hideDuration[0] = 0.00f;
    this->_hideDuration[1] = 0.00f;
    this->_hideDuration[2] = 0.00f;
    this->_perkEnabled = false;
}

