#include "ChaseUpdateInfo.h"

FChaseUpdateInfo::FChaseUpdateInfo() {
    this->SurvivorTravelDistance = 0.00f;
    this->KillerTravelDistance = 0.00f;
    this->ChaseStartHealthStatus = ECamperDamageState::VE_Healthy;
}

