#include "DownedByBasicAttack.h"
#include "Net/UnrealNetwork.h"

void UDownedByBasicAttack::OnRep_ReplicatedIsTrue() {
}

void UDownedByBasicAttack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDownedByBasicAttack, _replicatedIsTrue);
}

UDownedByBasicAttack::UDownedByBasicAttack() {
    this->_replicatedIsTrue = false;
}

