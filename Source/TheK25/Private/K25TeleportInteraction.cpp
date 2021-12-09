#include "K25TeleportInteraction.h"

class ASlasherPlayer;

void UK25TeleportInteraction::Multicast_TeleportKillerToTargetPosition_Implementation(ASlasherPlayer* killer, FVector location, FRotator rotation) {
}

void UK25TeleportInteraction::Multicast_InitializeHusk_Implementation(FVector location, FRotator rotation) {
}




UK25TeleportInteraction::UK25TeleportInteraction() {
    this->_maxNumberLocationQueriesPerTick = 10;
    this->_timeSensingLamentConfigurationAfterInteractionEnded = 1.50f;
}

