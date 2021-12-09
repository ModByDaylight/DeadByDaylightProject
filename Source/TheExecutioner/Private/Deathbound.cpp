#include "Deathbound.h"
#include "Net/UnrealNetwork.h"

void UDeathbound::OnRep_SurvivorsToReveal() {
}


float UDeathbound::GetRevealLocationDuration() const {
    return 0.0f;
}

void UDeathbound::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeathbound, _survivorsToReveal);
}

UDeathbound::UDeathbound() {
    this->_distanceFromRescuedSurvivorForOblivious[0] = 0.00f;
    this->_distanceFromRescuedSurvivorForOblivious[1] = 0.00f;
    this->_distanceFromRescuedSurvivorForOblivious[2] = 0.00f;
    this->_activationDuration = 0.00f;
    this->_rescueDistanceFromKillerToActivate = 0.00f;
    this->_revealLocationDuration = 0.00f;
    this->_unhook = false;
    this->_fromDyingState = true;
}

