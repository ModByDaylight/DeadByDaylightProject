#include "TrailControllerBase.h"

class ABaseTormentTrailPoint;

void ATrailControllerBase::RemoveTormentTrailController() {
}

void ATrailControllerBase::OnTrailPointDeath(ABaseTormentTrailPoint* baseTrailPoint) {
}

void ATrailControllerBase::OnAcquireChanged(const bool acquired) {
}


ATrailControllerBase::ATrailControllerBase() {
    this->_tormentTrailPointCollection = NULL;
    this->_trailType = ETrailType::NormalTrail;
}

