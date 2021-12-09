#include "DBDSpringArmComponent.h"

class AActor;

void UDBDSpringArmComponent::IgnoreActor(AActor* Actor, bool bShouldIgnore) {
}

void UDBDSpringArmComponent::ClearIgnoreActors() {
}

UDBDSpringArmComponent::UDBDSpringArmComponent() {
    this->bEnableComponentwiseCameraLag = false;
    this->TargetArmMinLength = 0.00f;
    this->bEnableDistanceCameraLag = false;
    this->CameraDistanceLagSpeed = 0.00f;
    this->bDrawDebugTraceMarkers = false;
}

