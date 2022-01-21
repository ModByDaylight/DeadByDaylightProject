#include "TrailControllerBase.h"
#include "Components/SplineComponent.h"
#include "AuthoritativePoolableActorComponent.h"

class ABaseTormentTrailPoint;

void ATrailControllerBase::RemoveTormentTrailController() {
}

void ATrailControllerBase::OnTrailPointDeath(ABaseTormentTrailPoint* baseTrailPoint) {
}

void ATrailControllerBase::OnAcquireChanged(const bool acquired) {
}


ATrailControllerBase::ATrailControllerBase() {
    this->_tormentTrailPointCollection = NULL;
    this->_splineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->_poolableComponent = CreateDefaultSubobject<UAuthoritativePoolableActorComponent>(TEXT("PoolableActorComponent"));
    this->_trailType = ETrailType::NormalTrail;
}

