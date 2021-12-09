#include "InteractionDetectorComponent.h"

class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void UInteractionDetectorComponent::SetDetectionPrimitive(UPrimitiveComponent* detectionPrimitive) {
}

void UInteractionDetectorComponent::OnLocallyObservedChanged(ADBDPlayer* player) {
}

UPrimitiveComponent* UInteractionDetectorComponent::GetDetectionPrimitive() const {
    return NULL;
}

void UInteractionDetectorComponent::EndOverlapCallback(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UInteractionDetectorComponent::BeginOverlapCallback(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult) {
}

void UInteractionDetectorComponent::AddIgnoredActor(AActor* ignored) {
}

UInteractionDetectorComponent::UInteractionDetectorComponent() {
    this->_detectionPrimitive = NULL;
}

