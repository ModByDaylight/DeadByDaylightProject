#include "BearTrapAnimInstance.h"

void UBearTrapAnimInstance::SetWasJustDisarmed(bool wasJustDisarmed) {
}

void UBearTrapAnimInstance::SetIsTrapSet(bool isTrapSet) {
}

void UBearTrapAnimInstance::SetIsBeingCollected(bool isBeingCollected) {
}

void UBearTrapAnimInstance::SetContainsSurvivor(bool containsSurvivor) {
}

UBearTrapAnimInstance::UBearTrapAnimInstance() {
    this->_isBroken = false;
    this->_isBeingCollected = false;
    this->_containsSurvivor = false;
    this->_isTrapSet = false;
    this->_wasJustDisarmed = false;
}

