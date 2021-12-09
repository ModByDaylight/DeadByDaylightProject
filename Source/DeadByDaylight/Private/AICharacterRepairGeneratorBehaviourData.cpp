#include "AICharacterRepairGeneratorBehaviourData.h"

class AGenerator;

void UAICharacterRepairGeneratorBehaviourData::Init(AGenerator* generator, ECharacterMovementTypes characterMovementType) {
}

UAICharacterRepairGeneratorBehaviourData::UAICharacterRepairGeneratorBehaviourData() {
    this->_generator = NULL;
    this->_characterMovementType = ECharacterMovementTypes::Normal;
}

