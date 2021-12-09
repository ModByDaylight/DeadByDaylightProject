#include "AICharacterHideInLockerBehaviourData.h"

class ALocker;

void UAICharacterHideInLockerBehaviourData::Init(ALocker* locker, ECharacterMovementTypes NewCharacterMovementType) {
}

UAICharacterHideInLockerBehaviourData::UAICharacterHideInLockerBehaviourData() {
    this->CharacterMovementType = ECharacterMovementTypes::Normal;
}

