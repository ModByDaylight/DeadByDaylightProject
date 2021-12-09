#include "ParticleSystemDistanceFaderComponent.h"

UParticleSystemDistanceFaderComponent::UParticleSystemDistanceFaderComponent() {
    this->ParticleSystemComponent = NULL;
    this->StartFadeDistance = 1900.00f;
    this->EndFadeDistance = 2500.00f;
}

