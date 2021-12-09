#include "TotemOutlineUpdateStrategy.h"

FLinearColor UTotemOutlineUpdateStrategy::GetRevealColorToSurvivor() const {
    return FLinearColor{};
}

UTotemOutlineUpdateStrategy::UTotemOutlineUpdateStrategy() {
    this->_revealedColorToKiller = NULL;
}

