#include "OutOfSightMeshRotator.h"

class UMeshComponent;

void UOutOfSightMeshRotator::SetMeshesToRotate(TArray<UMeshComponent*> meshesToRotate) {
}

UOutOfSightMeshRotator::UOutOfSightMeshRotator() {
    this->_maxDistance = 3200.00f;
    this->_dotProductThreshold = -0.10f;
    this->_locallyObservedPlayer = NULL;
    this->_rotationOffset = 0.00f;
}

