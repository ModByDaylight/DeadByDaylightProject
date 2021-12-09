#include "OfferingHandler.h"
#include "Net/UnrealNetwork.h"

void UOfferingHandler::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOfferingHandler, _levelPerkIDs);
}

UOfferingHandler::UOfferingHandler() {
    this->_gameInstance = NULL;
}

