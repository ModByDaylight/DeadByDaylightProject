#include "AnyMeansNecessary.h"

void UAnyMeansNecessary::Authority_OnPalletPullUpStarted(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

void UAnyMeansNecessary::Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) {
}

UAnyMeansNecessary::UAnyMeansNecessary() {
    this->RevealSurvivorOnPalletPullUpStarted = false;
    this->RevealSurvivorOnPalletPulledUp = false;
    this->RevealSurvivorDuration = 0.00f;
    this->_cooldownDuration[0] = 0.00f;
    this->_cooldownDuration[1] = 0.00f;
    this->_cooldownDuration[2] = 0.00f;
}

