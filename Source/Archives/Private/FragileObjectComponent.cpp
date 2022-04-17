#include "FragileObjectComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UFragileObjectComponent::OnRep_Repaired() const {
}

bool UFragileObjectComponent::IsRepaired() const {
    return false;
}

ADBDPlayer* UFragileObjectComponent::GetPreviousCollector() const {
    return NULL;
}

void UFragileObjectComponent::DBD_RepairFragileObject() {
}

void UFragileObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFragileObjectComponent, _repaired);
}

UFragileObjectComponent::UFragileObjectComponent() {
    this->_repaired = false;
    this->_minFallingHeight = 0.00f;
    this->_previousCollector = NULL;
}

