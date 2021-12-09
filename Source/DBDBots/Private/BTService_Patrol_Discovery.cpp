#include "BTService_Patrol_Discovery.h"

UBTService_Patrol_Discovery::UBTService_Patrol_Discovery() {
    this->RejectPatrolPointIfInPressureZone = false;
    this->MaxFindRandomLocationOnTileAttempts = 6;
    this->FirstFindOnNbNeighborTiles = 6;
}

