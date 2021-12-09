#include "BlessedStatusEffect.h"

class ATotem;
class ACamperPlayer;



ATotem* UBlessedStatusEffect::GetBoundTotem() const {
    return NULL;
}

float UBlessedStatusEffect::GetBoonTotemBlessingRange() const {
    return 0.0f;
}

void UBlessedStatusEffect::Authority_OnSurvivorRemovedFromGame(ACamperPlayer* survivor) {
}

UBlessedStatusEffect::UBlessedStatusEffect() {
    this->_vignetteControllerBlueprint = NULL;
}

