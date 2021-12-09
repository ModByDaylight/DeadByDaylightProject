#include "VomitStateComponent.h"

class UGameplayTagContainerComponent;

void UVomitStateComponent::SetVomitState(ELinkedVomitState newVomitState) {
}

void UVomitStateComponent::SetObjectState(UGameplayTagContainerComponent* objectState) {
}

bool UVomitStateComponent::IsVomiting() const {
    return false;
}

ELinkedVomitState UVomitStateComponent::getVomitState() const {
    return ELinkedVomitState::Idle;
}

UVomitStateComponent::UVomitStateComponent() {
}

