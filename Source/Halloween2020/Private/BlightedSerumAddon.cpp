#include "BlightedSerumAddon.h"
#include "Net/UnrealNetwork.h"

void UBlightedSerumAddon::OnRep_DashInteraction() {
}


void UBlightedSerumAddon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlightedSerumAddon, _dashInteraction);
}

UBlightedSerumAddon::UBlightedSerumAddon() {
    this->_blightedSerumCollectable = NULL;
    this->_dashInteraction = NULL;
    this->_theBlightExtraTokens = 1;
    this->_numberOfDashesPerEvent = 1;
}

