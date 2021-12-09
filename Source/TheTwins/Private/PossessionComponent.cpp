#include "PossessionComponent.h"

class ADBDPlayer;

void UPossessionComponent::Server_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction) {
}
bool UPossessionComponent::Server_StartPossessionOf_Validate(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction) {
    return true;
}

void UPossessionComponent::Server_NotifyPossessionDone_Implementation() {
}
bool UPossessionComponent::Server_NotifyPossessionDone_Validate() {
    return true;
}

void UPossessionComponent::OnLevelReadyToPlay() {
}

void UPossessionComponent::Multicast_StartPossessionOf_Implementation(ADBDPlayer* playerToPossess) {
}

void UPossessionComponent::Multicast_NotifyPossessionDone_Implementation() {
}

bool UPossessionComponent::IsPossessed() const {
    return false;
}

bool UPossessionComponent::IsDormant() const {
    return false;
}




void UPossessionComponent::Client_StartStateMachineDriverChangeProcess_Implementation() {
}

UPossessionComponent::UPossessionComponent() {
    this->_startPossessed = true;
    this->_emptyController = NULL;
}

