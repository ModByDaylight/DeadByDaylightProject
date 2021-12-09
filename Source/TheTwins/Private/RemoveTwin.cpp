#include "RemoveTwin.h"

class ADBDPlayer;

void URemoveTwin::OnRemoveMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted, ADBDPlayer* destroyingPlayer) {
}

URemoveTwin::URemoveTwin() {
    this->_brotherRemoveDistanceFromSurvivor = 50.00f;
}

