#include "AIMoveToInteractData.h"

class AActor;

void UAIMoveToInteractData::Init(AActor* interactActor, ECharacterMovementTypes characterMovementTypes, AActor* targetPositionActor) {
}

UAIMoveToInteractData::UAIMoveToInteractData() {
    this->_interactActor = NULL;
    this->_targetPositionActor = NULL;
    this->_characterMovementTypes = ECharacterMovementTypes::Normal;
}

