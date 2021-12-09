#include "SectionnedChargeableComponent.h"

float USectionnedChargeableComponent::GetSectionChargeRemaining() const {
    return 0.0f;
}

USectionnedChargeableComponent::USectionnedChargeableComponent() {
    this->_sections = 1;
}

