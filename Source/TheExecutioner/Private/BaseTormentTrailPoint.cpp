#include "BaseTormentTrailPoint.h"

void ABaseTormentTrailPoint::EndOfDisapearCosmetic() {
}


ABaseTormentTrailPoint::ABaseTormentTrailPoint() {
    this->_collisionRadius = 50.00f;
    this->_splineMeshComponent = NULL;
    this->_indexInTrail = 0;
}

