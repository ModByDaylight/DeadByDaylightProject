#include "AuthoritativePoolableActorComponent.h"
#include "Net/UnrealNetwork.h"

void UAuthoritativePoolableActorComponent::OnRep_Acquired() {
}

void UAuthoritativePoolableActorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAuthoritativePoolableActorComponent, _acquired);
}

UAuthoritativePoolableActorComponent::UAuthoritativePoolableActorComponent() {
    this->_acquired = false;
}

