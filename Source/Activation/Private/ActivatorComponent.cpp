#include "ActivatorComponent.h"

class UGameplayTagContainerComponent;

void UActivatorComponent::SetObjectState(UGameplayTagContainerComponent* objectState) {
}

UActivatorComponent::UActivatorComponent() {
    this->_searchForActivatableSubAnimInstances = false;
}

