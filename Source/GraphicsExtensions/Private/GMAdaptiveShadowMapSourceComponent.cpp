#include "GMAdaptiveShadowMapSourceComponent.h"

void UGMAdaptiveShadowMapSourceComponent::SetLightRadiusWithBounds(FVector BoundingSphereCenter, float BoundingSphereRadius) {
}

UGMAdaptiveShadowMapSourceComponent::UGMAdaptiveShadowMapSourceComponent() {
    this->bUseAutoRadius = false;
    this->Radius = 10000.00f;
    this->DepthMin = -10000.00f;
    this->DepthMax = 10000.00f;
    this->Levels = 4;
    this->PreGeneratedLevels = 2;
}

