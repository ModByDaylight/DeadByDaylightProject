#include "GnomePlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UGnomePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGnomePlayerComponent, _hasInteractedWithGnomeThisGame);
}

UGnomePlayerComponent::UGnomePlayerComponent() {
    this->_hasInteractedWithGnomeThisGame = false;
}

