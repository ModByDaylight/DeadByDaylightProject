#include "SnowmanSpawnPlacementStrategy.h"

void USnowmanSpawnPlacementStrategy::Authority_OnIntroCompletedOrLevelReadyToPlay() {
}

USnowmanSpawnPlacementStrategy::USnowmanSpawnPlacementStrategy() {
    this->_minDistanceFromOtherActiveSnowmenSquared = 0.00f;
    this->_minDistanceFromOtherPlayersSquared = 0.00f;
    this->_minPalletDistanceSquared = 0.00f;
    this->_minHatchSquaredDistance = 0.00f;
    this->_downRaycastLength = 1000.00f;
    this->_rayCastZOffet = 25.00f;
    this->_distanceToGroundToleranceSquared = 625.00f;
}

