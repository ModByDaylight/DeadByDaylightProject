#include "LuckyBreak.h"

void ULuckyBreak::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

void ULuckyBreak::ActivationTimerEnded() {
}

ULuckyBreak::ULuckyBreak() {
    this->_activationTime[0] = 0.00f;
    this->_activationTime[1] = 0.00f;
    this->_activationTime[2] = 0.00f;
}

