#include "KillerInstinctComponent.h"

class UNiagaraComponent;

void UKillerInstinctComponent::SetParticleSystem(UNiagaraComponent* particleSystemComponent) {
}

void UKillerInstinctComponent::OnKillerLocallyObservedChanged(bool locallyObserved) {
}

bool UKillerInstinctComponent::IsOwnerInKillerInstinctRadius() const {
    return false;
}

UNiagaraComponent* UKillerInstinctComponent::GetParticleSystem() {
    return NULL;
}

UKillerInstinctComponent::UKillerInstinctComponent() {
    this->_particleSystemComponent = NULL;
}

