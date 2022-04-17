#include "AnxiousGaspAddon.h"

class UPrimitiveComponent;
class AActor;

void UAnxiousGaspAddon::OnDetectorOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

UAnxiousGaspAddon::UAnxiousGaspAddon() {
    this->_screamSoundEvent = NULL;
    this->_detectionCapsuleHalfHeight = 100.00f;
    this->_detectionCapsuleRadius = 100.00f;
    this->_survivorDetector = NULL;
}

