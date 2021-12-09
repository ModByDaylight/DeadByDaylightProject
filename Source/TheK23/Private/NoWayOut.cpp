#include "NoWayOut.h"

class ADBDPlayer;
class AEscapeDoor;

void UNoWayOut::Multicast_TriggerLoudNoise_Implementation(ADBDPlayer* instigator, AEscapeDoor* escapeDoor) {
}

UNoWayOut::UNoWayOut() {
    this->_exitGatePanelBlockBaseDuration[0] = 0.00f;
    this->_exitGatePanelBlockBaseDuration[1] = 0.00f;
    this->_exitGatePanelBlockBaseDuration[2] = 0.00f;
    this->_exitGatePanelBlockDurationPerToken[0] = 0.00f;
    this->_exitGatePanelBlockDurationPerToken[1] = 0.00f;
    this->_exitGatePanelBlockDurationPerToken[2] = 0.00f;
}

