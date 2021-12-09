#include "BTService_Patrol.h"

UBTService_Patrol::UBTService_Patrol() {
    this->FilterOperation = EBasicKeyOperation::Set;
    this->MinPatrolInvestigationDistance = 400.00f;
    this->PatrolPointsValidityCheckInterval = 1.50f;
}

