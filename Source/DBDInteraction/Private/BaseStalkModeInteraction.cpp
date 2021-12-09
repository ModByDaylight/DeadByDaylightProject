#include "BaseStalkModeInteraction.h"

class UStalkerComponent;

UStalkerComponent* UBaseStalkModeInteraction::GetStalkerComponent() const {
    return NULL;
}

bool UBaseStalkModeInteraction::CanStalk() const {
    return false;
}

UBaseStalkModeInteraction::UBaseStalkModeInteraction() {
}

