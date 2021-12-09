#include "DBDNavModifierComponent.h"

UDBDNavModifierComponent::UDBDNavModifierComponent() {
    this->ForceUseFailsafeExtent = true;
    this->UpdateModifierInterval = 0.25f;
    this->StartNavigationRelevant = true;
    this->AlwaysTickToCheckTransform = true;
    this->RelevantPassiveMode = false;
}

