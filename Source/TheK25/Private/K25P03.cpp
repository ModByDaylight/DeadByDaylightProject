#include "K25P03.h"

class ACamperPlayer;

void UK25P03::OnSurvivorRemoved(ACamperPlayer* survivor) {
}

void UK25P03::OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

void UK25P03::OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData) {
}

UK25P03::UK25P03() {
    this->_numberOfSurvivorsWaitingForDamageStateChange = 0;
    this->_state2ActionSpeedDebuffPercentage[0] = 0.00f;
    this->_state2ActionSpeedDebuffPercentage[1] = 0.00f;
    this->_state2ActionSpeedDebuffPercentage[2] = 0.00f;
}

