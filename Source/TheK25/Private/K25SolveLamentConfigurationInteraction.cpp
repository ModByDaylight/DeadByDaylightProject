#include "K25SolveLamentConfigurationInteraction.h"

class ADBDPlayer;
class ASlasherPlayer;

void UK25SolveLamentConfigurationInteraction::Multicast_TriggerKillerStoppedInteractionViaAttackSFX_Implementation(ASlasherPlayer* killer) {
}


void UK25SolveLamentConfigurationInteraction::Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type) {
}

UK25SolveLamentConfigurationInteraction::UK25SolveLamentConfigurationInteraction() {
    this->_timeBufferBeforeAllowedToUseInteractionAgain = 1.00f;
}

