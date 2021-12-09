#include "TormentTrailPoint.h"

class USplineComponent;

void ATormentTrailPoint::Server_RemoveTrailPoint_Implementation() {
}
bool ATormentTrailPoint::Server_RemoveTrailPoint_Validate() {
    return true;
}


void ATormentTrailPoint::OnAcquireChanged(const bool acquired) {
}

void ATormentTrailPoint::Multicast_TriggerTrailPointDisappear_Implementation() {
}

void ATormentTrailPoint::GetTrailLocationAndTangeant(const int32 indexInTrail, const USplineComponent* splineComponent, FVector& outStartLocation, FVector& outStartTangent, FVector& outEndLocation, FVector& outEndTangent) const {
}



ATormentTrailPoint::ATormentTrailPoint() {
    this->_splineMeshOverlapDistance = 0.00f;
}

