#include "ScreenSpaceLocationComponent.h"

bool UScreenSpaceLocationComponent::HasValidPosition() const {
    return false;
}

FVector2D UScreenSpaceLocationComponent::GetCurrentResolution() const {
    return FVector2D{};
}

UScreenSpaceLocationComponent::UScreenSpaceLocationComponent() {
    this->ScreenSpaceX = 0.00f;
    this->ScreenSpaceY = 0.00f;
    this->FrameDelay = 0;
}

