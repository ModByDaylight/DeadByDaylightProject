#include "AimableComponent.h"

class AActor;
class UAimPointProcessor;

void UAimableComponent::SetProcessors(TArray<UAimPointProcessor*> processors) {
}

void UAimableComponent::SetOcclusionIgnoredActors(const TArray<AActor*>& ignoredActors) {
}

void UAimableComponent::SetMaxAimDistance(float maxAimDistance) {
}

UAimableComponent::UAimableComponent() {
    this->_maxAimDistance = 1000.00f;
    this->_aimDirectionProvider = NULL;
    this->_useOcclusion = false;
    this->_aimPointLerpFactor = 15.00f;
}

