#include "S28P01.h"
#include "Net/UnrealNetwork.h"

void US28P01::OnRep_S28P01ChargeableComponent() {
}

void US28P01::OnRep_IsPerkActive() {
}

void US28P01::OnRep_IsInteractionOngoing() {
}

void US28P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(US28P01, _S28P01ChargeableComponent);
    DOREPLIFETIME(US28P01, _isPerkActive);
    DOREPLIFETIME(US28P01, _isInteractionOngoing);
}

US28P01::US28P01() {
    this->_auraRevealDuration[0] = 0.00f;
    this->_auraRevealDuration[1] = 0.00f;
    this->_auraRevealDuration[2] = 0.00f;
    this->_auraRevealRange[0] = 0.00f;
    this->_auraRevealRange[1] = 0.00f;
    this->_auraRevealRange[2] = 0.00f;
    this->_S28P01ChargeableComponent = NULL;
    this->_isPerkActive = false;
    this->_isInteractionOngoing = false;
    this->_playerOwner = NULL;
}

