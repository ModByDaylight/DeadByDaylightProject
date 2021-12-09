#include "K26AbilitySubAnimInstance.h"

void UK26AbilitySubAnimInstance::OnHasProjectileFired() {
}

void UK26AbilitySubAnimInstance::OnHasProjectileBeenSummoned(const int32 remainingAmmo, const int32 maxAmmo) {
}

void UK26AbilitySubAnimInstance::ConsumeHasProjectileFired() {
}

void UK26AbilitySubAnimInstance::ConsumeHasProjectileBeenSummoned() {
}

UK26AbilitySubAnimInstance::UK26AbilitySubAnimInstance() {
    this->_fireInteractionCooldownTime = 0.00f;
    this->_hasChargingStarted = false;
    this->_hasProjectileBeenSummoned = false;
    this->_hasChargingEnded = false;
    this->_hasProjectileFired = false;
}

