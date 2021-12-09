#include "K26DismissCrowChargeableInteractionDefinition.h"

class ASlasherPlayer;
class UChargeableComponent;

void UK26DismissCrowChargeableInteractionDefinition::OnLevelReadyToPlay() {
}

void UK26DismissCrowChargeableInteractionDefinition::OnKillerSet(ASlasherPlayer* killer, UChargeableComponent* chargeableComponent) {
}

void UK26DismissCrowChargeableInteractionDefinition::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

UK26DismissCrowChargeableInteractionDefinition::UK26DismissCrowChargeableInteractionDefinition() {
    this->_k26PowerStatusHandlerComponent = NULL;
    this->_isLevelReadyToPlay = false;
}

