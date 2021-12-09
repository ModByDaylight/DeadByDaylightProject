#include "CustomizedAnimationComponent.h"

void UCustomizedAnimationComponent::OnCustomizationChanged() {
}

UCustomizedAnimationComponent::UCustomizedAnimationComponent() {
    this->_owner = NULL;
    this->_customizedSkeletalMesh = NULL;
    this->_defaultAnimClass = NULL;
}

