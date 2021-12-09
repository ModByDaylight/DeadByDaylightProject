#include "WakerObjectAnimInstance.h"

class AWakerObject;

void UWakerObjectAnimInstance::ResetReappearTimer() {
}


bool UWakerObjectAnimInstance::GetWakerObjectStarted() const {
    return false;
}

bool UWakerObjectAnimInstance::GetWakerObjectChargeComplete() const {
    return false;
}

float UWakerObjectAnimInstance::GetWakerObjectCharge() const {
    return 0.0f;
}

AWakerObject* UWakerObjectAnimInstance::GetWakerObject() const {
    return NULL;
}

UWakerObjectAnimInstance::UWakerObjectAnimInstance() {
    this->_reappearTimerCooldown = 5.00f;
    this->_wakeUpCharge = 0.00f;
    this->_chargeStarted = false;
    this->_interactionComplete = false;
    this->_outEnd = false;
    this->_reset = false;
    this->_inEnd = false;
    this->_wakerObjectStarted = false;
    this->_respawnEnd = false;
    this->_cancelEnd = false;
}

