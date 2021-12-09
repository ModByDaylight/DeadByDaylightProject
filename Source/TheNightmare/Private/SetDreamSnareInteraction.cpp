#include "SetDreamSnareInteraction.h"

bool USetDreamSnareInteraction::HasCancelledDreamSnare() const {
    return false;
}

float USetDreamSnareInteraction::GetTrapDistanceFromControlRotation() const {
    return 0.0f;
}

USetDreamSnareInteraction::USetDreamSnareInteraction() {
    this->MinPitch = 70.00f;
    this->MinPlacementDistance = 50.00f;
    this->MaxPlacementDistance = 450.00f;
}

