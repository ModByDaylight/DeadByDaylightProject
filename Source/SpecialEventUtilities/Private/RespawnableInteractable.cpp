#include "RespawnableInteractable.h"
#include "Net/UnrealNetwork.h"


void ARespawnableInteractable::OnRep_IsHidden() {
}


bool ARespawnableInteractable::IsHidden() const {
    return false;
}

void ARespawnableInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARespawnableInteractable, _isHidden);
}

ARespawnableInteractable::ARespawnableInteractable() {
    this->_isHidden = true;
}

