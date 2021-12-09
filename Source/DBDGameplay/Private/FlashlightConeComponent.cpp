#include "FlashlightConeComponent.h"

float UFlashlightConeComponent::GetOcclusionDistance() const {
    return 0.0f;
}

float UFlashlightConeComponent::GetEffectiveConeLength() const {
    return 0.0f;
}

float UFlashlightConeComponent::GetEffectiveConeHalfAngle() const {
    return 0.0f;
}

UFlashlightConeComponent::UFlashlightConeComponent() {
    this->_flashlightBottom = NULL;
}

