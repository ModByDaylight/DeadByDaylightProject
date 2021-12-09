#include "CamperBloodTrailComponent.h"

void UCamperBloodTrailComponent::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

UCamperBloodTrailComponent::UCamperBloodTrailComponent() {
    this->_camperPerkManager = NULL;
}

