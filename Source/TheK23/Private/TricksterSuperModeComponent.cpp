#include "TricksterSuperModeComponent.h"
#include "Net/UnrealNetwork.h"

void UTricksterSuperModeComponent::OnRepIsSuperModeReady() {
}

void UTricksterSuperModeComponent::OnRepIsInSuperMode() {
}

void UTricksterSuperModeComponent::OnRepIsInCooldown() {
}

void UTricksterSuperModeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTricksterSuperModeComponent, _isInSuperMode);
    DOREPLIFETIME(UTricksterSuperModeComponent, _isSuperModeReady);
    DOREPLIFETIME(UTricksterSuperModeComponent, _isInCooldown);
}

UTricksterSuperModeComponent::UTricksterSuperModeComponent() {
    this->_isInSuperMode = false;
    this->_isSuperModeReady = false;
    this->_isInCooldown = false;
}

