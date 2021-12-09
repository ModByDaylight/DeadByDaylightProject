#include "FlashlightTargetFXComponent.h"

void UFlashlightTargetFXComponent::OnIsLitChanged(bool isLit) {
}

UFlashlightTargetFXComponent::UFlashlightTargetFXComponent() {
    this->_modifiesBeamAngle = false;
    this->_flashlightable = NULL;
}

