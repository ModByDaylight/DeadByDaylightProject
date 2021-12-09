#include "NearTrackedActorComponent.h"

class AActor;

void UNearTrackedActorComponent::StopTrackingActor(const AActor* actor) {
}

void UNearTrackedActorComponent::StartTrackingActor(const AActor* actor) {
}

void UNearTrackedActorComponent::SetDistanceThreshold(float value) {
}

bool UNearTrackedActorComponent::IsActorWithinRange(const AActor* actor) const {
    return false;
}

UNearTrackedActorComponent::UNearTrackedActorComponent() {
    this->_distanceThreshold = 0.00f;
}

