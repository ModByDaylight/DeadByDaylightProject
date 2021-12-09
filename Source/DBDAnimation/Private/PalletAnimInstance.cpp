#include "PalletAnimInstance.h"

class ASlasherPlayer;

void UPalletAnimInstance::OnKillerSet(ASlasherPlayer* killer) {
}

UPalletAnimInstance::UPalletAnimInstance() {
    this->_isPulledDown = false;
    this->_isBeingPulledUp = false;
    this->_isBeingDestroyed = false;
    this->_isBeingDestroyedPlayRate = 0.00f;
}

