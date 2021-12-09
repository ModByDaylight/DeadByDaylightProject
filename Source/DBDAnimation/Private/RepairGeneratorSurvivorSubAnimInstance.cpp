#include "RepairGeneratorSurvivorSubAnimInstance.h"

URepairGeneratorSurvivorSubAnimInstance::URepairGeneratorSurvivorSubAnimInstance() {
    this->_side = -1;
    this->_repairAnimIndex = -1;
    this->_isRepairingGenerator = false;
    this->_rightFootDown = false;
    this->_animSequenceVariationCount = 3;
    this->_isVomiting = false;
    this->_hasSkillCheckFailed = false;
}

