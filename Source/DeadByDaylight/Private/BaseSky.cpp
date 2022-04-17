#include "BaseSky.h"

class USkyLightComponent;
class UExponentialHeightFogComponent;
class AActor;
class UPostProcessComponent;
class UStaticMeshComponent;
class UDirectionalLightComponent;


void ABaseSky::SetProbesTint(FLinearColor inColor, float inSaturation) {
}

void ABaseSky::SetCullDistance(float newCullDistance) {
}

void ABaseSky::OnFadeEnd_Implementation(AActor* other) {
}

void ABaseSky::OnFadeBegin_Implementation(AActor* other) {
}

void ABaseSky::OnAlphaChanged_Implementation(float newAlpha, AActor* other) {
}

UPostProcessComponent* ABaseSky::GetPostprocessComponent_Implementation() {
    return NULL;
}

void ABaseSky::CopyComponentsSettingsFromSource(UStaticMeshComponent* moonMesh, UDirectionalLightComponent* shadowLight, UDirectionalLightComponent* godRayLight, USkyLightComponent* skylight, UExponentialHeightFogComponent* heightFog, UPostProcessComponent* postProcess, UClass* sourceBaseSkyClass) {
}

ABaseSky::ABaseSky() {
    this->AdjustCullDistance = false;
    this->EnableIBL = false;
    this->IBLContributionMultiplier = 1.00f;
    this->ProbesSaturationValue = 0.20f;
}

