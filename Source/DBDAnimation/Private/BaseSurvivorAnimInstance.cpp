#include "BaseSurvivorAnimInstance.h"

class ACamperPlayer;

ACamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor() const {
    return NULL;
}

UBaseSurvivorAnimInstance::UBaseSurvivorAnimInstance() {
    this->_owningSurvivor = NULL;
}

