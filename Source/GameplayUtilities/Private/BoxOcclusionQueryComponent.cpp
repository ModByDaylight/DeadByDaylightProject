#include "BoxOcclusionQueryComponent.h"

float UBoxOcclusionQueryComponent::GetVisiblePercentOfScreen() const {
    return 0.0f;
}

float UBoxOcclusionQueryComponent::GetNumberOfVisiblePixels() const {
    return 0.0f;
}

float UBoxOcclusionQueryComponent::GetEstimatedRenderedPixelCount() const {
    return 0.0f;
}

UBoxOcclusionQueryComponent::UBoxOcclusionQueryComponent() {
    this->TimeUntilOccluded = 0.20f;
}

