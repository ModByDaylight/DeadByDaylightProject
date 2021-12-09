#include "K25KillerTeleportationPositionFinderComponent.h"

UK25KillerTeleportationPositionFinderComponent::UK25KillerTeleportationPositionFinderComponent() {
    this->_rayCastZOffet = 150.00f;
    this->_rayCastLength = 10000.00f;
    this->_killerInRangeMinimumDistanceCheck = 200.00f;
    this->_killerInRangeMaxRangePercentage = 0.75f;
    this->_deltaHeightThreshold = 20.00f;
    this->_timeBetweenFailsafeChecks = 2.00f;
    this->_teleportLocationStatus = EK25TeleportLocationStatus::Invalid;
}

