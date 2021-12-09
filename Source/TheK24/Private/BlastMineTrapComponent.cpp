#include "BlastMineTrapComponent.h"
#include "Net/UnrealNetwork.h"

void UBlastMineTrapComponent::OnRep_IsTrapActive() {
}

void UBlastMineTrapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlastMineTrapComponent, _isTrapActive);
}

UBlastMineTrapComponent::UBlastMineTrapComponent() {
    this->_isTrapActive = false;
}

