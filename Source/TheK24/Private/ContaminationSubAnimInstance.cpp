#include "ContaminationSubAnimInstance.h"

UContaminationSubAnimInstance::UContaminationSubAnimInstance() {
    this->_isContaminated = false;
    this->_isInjectingSerumSelf = false;
    this->_isInjectingSerumOther = false;
    this->_isBeingInjectedWithSerum = false;
    this->_isBeingHealed = false;
    this->_isFirstContaminationHit = false;
}

