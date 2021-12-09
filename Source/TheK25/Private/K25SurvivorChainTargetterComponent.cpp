#include "K25SurvivorChainTargetterComponent.h"

void UK25SurvivorChainTargetterComponent::Multicast_DebugPositionFind_Implementation(const FVector& startSweepPosition, const FVector& endSweepPosition, bool hasFoundPosition, const FVector& foundPosition, bool hasFoundCollision, const FVector& collisionPosition) const {
}

void UK25SurvivorChainTargetterComponent::Authority_OnSurvivorHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState) {
}

UK25SurvivorChainTargetterComponent::UK25SurvivorChainTargetterComponent() {
    this->_timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt = 0.10f;
    this->_sphereCastRadius = 20.00f;
    this->_numberOfPositionFindingTries = 5;
    this->_maxNumberOfChainRetries = 3;
}

