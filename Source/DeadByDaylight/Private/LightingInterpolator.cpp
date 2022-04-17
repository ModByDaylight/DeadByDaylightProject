#include "LightingInterpolator.h"

class USkyLightComponent;
class ULightComponent;
class UExponentialHeightFogComponent;

void ULightingInterpolator::LerpSkylight(USkyLightComponent* Target, USkyLightComponent* A, USkyLightComponent* B, float alpha) {
}

void ULightingInterpolator::LerpLight(ULightComponent* Target, ULightComponent* A, ULightComponent* B, float alpha) {
}

void ULightingInterpolator::LerpHeightFog(UExponentialHeightFogComponent* Target, UExponentialHeightFogComponent* A, UExponentialHeightFogComponent* B, float alpha) {
}

ULightingInterpolator::ULightingInterpolator() {
    this->_targetLighting = NULL;
}

