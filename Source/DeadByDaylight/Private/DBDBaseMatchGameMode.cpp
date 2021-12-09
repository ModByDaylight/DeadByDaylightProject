#include "DBDBaseMatchGameMode.h"

class UEndGameComponent;

UEndGameComponent* ADBDBaseMatchGameMode::GetEndGameComponent() const {
    return NULL;
}

ADBDBaseMatchGameMode::ADBDBaseMatchGameMode() {
    this->_escapeRequirementTracker = NULL;
    this->_theFence = NULL;
}

