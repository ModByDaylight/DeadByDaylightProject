#include "ExposerCirclingComponent.h"

void UExposerCirclingComponent::SetIsCircling(bool circling) {
}

void UExposerCirclingComponent::Reset() {
}

UExposerCirclingComponent::UExposerCirclingComponent() {
    this->DirectionFollows = false;
    this->MinHeight = 0.00f;
    this->MaxHeight = 0.00f;
    this->MinRadius = 0.00f;
    this->MaxRadius = 0.00f;
    this->CirclingSpeed = 0.00f;
    this->DistanceBetweenPoints = 0.00f;
    this->BezierModifier = 0.00f;
    this->Samples = 0;
}

