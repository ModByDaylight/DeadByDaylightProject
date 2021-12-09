#include "LamentConfigurationSpawnStrategy.h"

ULamentConfigurationSpawnStrategy::ULamentConfigurationSpawnStrategy() {
    this->_killerPointDistanceMultiplier = 2.50f;
    this->_survivorPointDistanceMultiplier = 1.00f;
    this->_maxDistancePointAllowed = 5000.00f;
    this->_minSurvivorDistance = 1000.00f;
    this->_minSurvivorDistancePointPenalty = 1000.00f;
    this->_minKillerDistance = 1500.00f;
    this->_minHatchDistance = 100.00f;
    this->_minKillerDistancePointPenalty = 1000.00f;
    this->_pointPenaltyPerUsedLocationTime = 500.00f;
    this->_downRaycastLength = 10000.00f;
    this->_rayCastZOffet = 150.00f;
}

