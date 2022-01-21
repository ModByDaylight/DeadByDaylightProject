#include "BaseTormentTrailPoint.h"
#include "Components/SphereComponent.h"

void ABaseTormentTrailPoint::EndOfDisapearCosmetic() {
}


ABaseTormentTrailPoint::ABaseTormentTrailPoint() {
    this->_collisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
    this->_collisionRadius = 50.00f;
    this->_splineMeshComponent = NULL;
    this->_indexInTrail = 0;
}

