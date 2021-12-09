#include "SupplyCrateInteractable.h"
#include "Net/UnrealNetwork.h"

void ASupplyCrateInteractable::OnRep_IsOpen() {
}

void ASupplyCrateInteractable::OnRep_IsAutoClosing() {
}

void ASupplyCrateInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASupplyCrateInteractable, _itemInSupplyCrate);
    DOREPLIFETIME(ASupplyCrateInteractable, _isOpen);
    DOREPLIFETIME(ASupplyCrateInteractable, _isAutoClosing);
}

ASupplyCrateInteractable::ASupplyCrateInteractable() {
    this->_contamainationSerumCollectable = NULL;
    this->_itemInSupplyCrate = NULL;
    this->_isOpen = false;
    this->_isAutoClosing = false;
}

