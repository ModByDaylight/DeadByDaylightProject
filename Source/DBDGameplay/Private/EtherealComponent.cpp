#include "EtherealComponent.h"
#include "Net/UnrealNetwork.h"

void UEtherealComponent::Server_SetIsEthereal_Implementation(float timestamp, bool ethereal) {
}
bool UEtherealComponent::Server_SetIsEthereal_Validate(float timestamp, bool ethereal) {
    return true;
}

void UEtherealComponent::OnRep_OnIsEtherealChanged() {
}

void UEtherealComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEtherealComponent, _isEthereal);
}

UEtherealComponent::UEtherealComponent() {
    this->_isEthereal = false;
}

