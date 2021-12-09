#include "DemogorgonHuskAnimInstance.h"

class ASlasherPlayer;

void UDemogorgonHuskAnimInstance::OnKillerSet(ASlasherPlayer* killer) {
}

UDemogorgonHuskAnimInstance::UDemogorgonHuskAnimInstance() {
    this->_teleportDuration = 0.00f;
    this->_teleportExitPlayRate = 0.00f;
    this->_isSlowerExit = false;
    this->_huskPortalSlowerExit = NULL;
    this->_huskPortalExit = NULL;
    this->_demogorgonPortalExit = NULL;
    this->_demogorgonPortalEntry = NULL;
    this->_owningPawn = NULL;
}

