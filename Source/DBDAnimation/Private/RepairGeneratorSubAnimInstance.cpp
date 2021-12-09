#include "RepairGeneratorSubAnimInstance.h"

URepairGeneratorSubAnimInstance::URepairGeneratorSubAnimInstance() {
    this->_owningGenerator = NULL;
    this->_isBeingRepaired = false;
    this->_repairingSurvivor = NULL;
    this->_animSequence = NULL;
}

