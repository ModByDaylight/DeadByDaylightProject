#include "ImAllEars.h"

void UImAllEars::Server_OnCamperLoudNoise_Implementation(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}
bool UImAllEars::Server_OnCamperLoudNoise_Validate(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
    return true;
}

UImAllEars::UImAllEars() {
    this->_cooldownByLevel[0] = 0;
    this->_cooldownByLevel[1] = 0;
    this->_cooldownByLevel[2] = 0;
    this->_durationByLevel[0] = 0.00f;
    this->_durationByLevel[1] = 0.00f;
    this->_durationByLevel[2] = 0.00f;
    this->_useTerrorRadius = true;
    this->_triggerOutsideRadius = 1200.00f;
}

