#include "HookSurvivorDefinition.h"

class AMeatHook;

AMeatHook* UHookSurvivorDefinition::GetMeatHook() const {
    return NULL;
}

UHookSurvivorDefinition::UHookSurvivorDefinition() {
    this->_survivorBeingHooked = NULL;
}

