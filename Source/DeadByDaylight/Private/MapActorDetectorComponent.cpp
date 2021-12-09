#include "MapActorDetectorComponent.h"

class UPrimitiveComponent;
class AActor;

void UMapActorDetectorComponent::SetDetectionPrimitive(UPrimitiveComponent* primitive) {
}

void UMapActorDetectorComponent::OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UMapActorDetectorComponent::UMapActorDetectorComponent() {
    this->_primitive = NULL;
}

