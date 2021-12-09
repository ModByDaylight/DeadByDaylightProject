#include "CrownPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UCrownPlayerComponent::OnRep_hasInteractedWithCrownPillarThisGame() {
}


void UCrownPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrownPlayerComponent, _hasInteractedWithCrownPillarThisGame);
}

UCrownPlayerComponent::UCrownPlayerComponent() {
    this->_hasInteractedWithCrownPillarThisGame = false;
}

