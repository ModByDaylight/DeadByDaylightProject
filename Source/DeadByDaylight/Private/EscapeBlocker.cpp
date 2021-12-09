#include "EscapeBlocker.h"

class UBoxComponent;
class UPrimitiveComponent;
class AActor;

void AEscapeBlocker::SetPlayerDetectionZone(UBoxComponent* playerDetectionZone) {
}

void AEscapeBlocker::SetCamperBlocker(UBoxComponent* camperBlocker) {
}

void AEscapeBlocker::OnPlayerDetectionZoneEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void AEscapeBlocker::OnPlayerDetectionZoneBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}



AEscapeBlocker::AEscapeBlocker() {
    this->_camperBlocker = NULL;
    this->_playerDetectionZone = NULL;
}

