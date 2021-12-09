#include "FlashlightableComponent.h"

bool UFlashlightableComponent::IsLit() const {
    return false;
}

UFlashlightableComponent::UFlashlightableComponent() {
    this->_lightingStrategy = NULL;
}

