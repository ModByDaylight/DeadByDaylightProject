#include "AIMoveToPositionData.h"

class AActor;

void UAIMoveToPositionData::Init(AActor* positionActor, ECharacterMovementTypes movementType, bool usePathfinding) {
}

UAIMoveToPositionData::UAIMoveToPositionData() {
    this->_positionActor = NULL;
    this->_movementType = ECharacterMovementTypes::Normal;
    this->_usePathfinding = true;
}

