#include "BreakableBase.h"

class ADBDPlayer;

void ABreakableBase::PlayAudioBreakable() {
}

bool ABreakableBase::IsUnbroken() const {
    return false;
}


void ABreakableBase::Explode(ADBDPlayer* player) {
}

ABreakableBase::ABreakableBase() {
    this->_state = EBreakableState::Unbroken;
    this->_akAudioBreakEvent = NULL;
}

