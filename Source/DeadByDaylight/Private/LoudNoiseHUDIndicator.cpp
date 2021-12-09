#include "LoudNoiseHUDIndicator.h"

void ULoudNoiseHUDIndicator::AddTrackedNoise(FVector location, float duration) {
}

ULoudNoiseHUDIndicator::ULoudNoiseHUDIndicator() {
    this->MaskMesh = NULL;
    this->DistortionMesh = NULL;
    this->EdgePadding = 0.00f;
    this->CornerRoundness = 0.00f;
    this->ScreenFadeOutDistance = 100.00f;
}

