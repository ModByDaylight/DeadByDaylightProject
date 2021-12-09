#include "DemogorgonPortalPlacementValidationStrategy.h"

UDemogorgonPortalPlacementValidationStrategy::UDemogorgonPortalPlacementValidationStrategy() {
    this->_portalPlacerState = NULL;
    this->_chargedAttackState = NULL;
    this->_distanceForWorldCollisionDetection = 0.00f;
    this->_numberOfGroundTest = 8.00f;
    this->_portalEdgeTestRadius = 120.00f;
    this->_maxElevationDifferentialOnPortalEdge = 30.00f;
}

