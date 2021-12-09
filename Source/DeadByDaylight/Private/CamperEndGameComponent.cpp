#include "CamperEndGameComponent.h"
#include "Net/UnrealNetwork.h"

void UCamperEndGameComponent::OnEndGameSacrificeEnd() {
}

void UCamperEndGameComponent::OnDelayBeforeSacrificeEnd() {
}

bool UCamperEndGameComponent::GetSacrificedByEndGame() const {
    return false;
}

void UCamperEndGameComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCamperEndGameComponent, _delayBeforeSacrifice);
    DOREPLIFETIME(UCamperEndGameComponent, _readyToBeSacrificed);
}

UCamperEndGameComponent::UCamperEndGameComponent() {
    this->_endGameEntityClass = NULL;
    this->_delayBeforeSacrifice = 0.00f;
    this->_readyToBeSacrificed = false;
}

