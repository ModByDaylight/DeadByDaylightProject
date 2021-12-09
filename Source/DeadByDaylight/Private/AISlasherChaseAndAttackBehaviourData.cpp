#include "AISlasherChaseAndAttackBehaviourData.h"

class ACamperPlayer;

void UAISlasherChaseAndAttackBehaviourData::Init(ACamperPlayer* targetSurvivor, float attackRangeDistance, float locationDistance) {
}

UAISlasherChaseAndAttackBehaviourData::UAISlasherChaseAndAttackBehaviourData() {
    this->_targetSurvivor = NULL;
    this->_sqrtAttackRangeDistance = 0.00f;
    this->_sqrtMaxTargetPositionDiff = 0.00f;
}

