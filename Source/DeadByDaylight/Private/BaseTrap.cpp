#include "BaseTrap.h"

void ABaseTrap::SetIsTrapSet(const bool value) {
}

bool ABaseTrap::IsTrapSet() const {
    return false;
}

ABaseTrap::ABaseTrap() {
    this->_isTrapSet = false;
}

