#include "BlinkComponent.h"

bool UBlinkComponent::IsOwnerInBlinkingState() const {
    return false;
}

UBlinkComponent::UBlinkComponent() {
    this->_isInBlinkingState = false;
}

