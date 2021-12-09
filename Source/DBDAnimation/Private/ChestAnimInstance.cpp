#include "ChestAnimInstance.h"

void UChestAnimInstance::OnSearchedChanged(bool searched) {
}

UChestAnimInstance::UChestAnimInstance() {
    this->_owningChest = NULL;
    this->_isOpen = false;
    this->_isBeingPriedOpen = false;
    this->_openChestInteraction = NULL;
}

