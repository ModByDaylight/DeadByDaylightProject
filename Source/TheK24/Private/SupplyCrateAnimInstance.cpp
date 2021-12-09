#include "SupplyCrateAnimInstance.h"

USupplyCrateAnimInstance::USupplyCrateAnimInstance() {
    this->_owningSupplyCrate = NULL;
    this->_isOpen = false;
    this->_isBeingPriedOpen = false;
    this->_isAutoClosing = false;
}

