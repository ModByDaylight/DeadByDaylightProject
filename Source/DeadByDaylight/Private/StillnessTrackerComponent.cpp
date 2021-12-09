#include "StillnessTrackerComponent.h"

void UStillnessTrackerComponent::StartTracking() {
}

UStillnessTrackerComponent::UStillnessTrackerComponent() {
    this->SpeedThreshold = 300.00f;
    this->DistanceThreshold = 400.00f;
    this->DistanceDecay = 1.00f;
    this->DecayWhileMoving = false;
    this->StillnessThreshhold = 0.70f;
    this->StillnessTimerLimit = 0.00f;
    this->DecaySpeedMultiplier = 2.00f;
}

