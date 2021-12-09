#include "AkLateReverbComponent.h"

UAkLateReverbComponent::UAkLateReverbComponent() {
    this->bEnable = true;
    this->AuxBus = NULL;
    this->SendLevel = 1.00f;
    this->FadeRate = 0.50f;
    this->Priority = 1.00f;
    this->NextLowerPriorityComponent = NULL;
}

