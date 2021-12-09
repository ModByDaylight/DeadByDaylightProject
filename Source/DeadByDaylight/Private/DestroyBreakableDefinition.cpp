#include "DestroyBreakableDefinition.h"

class ABreakableBase;

ABreakableBase* UDestroyBreakableDefinition::GetBreakable() const {
    return NULL;
}

UDestroyBreakableDefinition::UDestroyBreakableDefinition() {
    this->_interactionTimePercentForDestroyEvent = 0.00f;
    this->_breakable = NULL;
}

