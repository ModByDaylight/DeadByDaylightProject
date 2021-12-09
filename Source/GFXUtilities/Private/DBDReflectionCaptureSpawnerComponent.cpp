#include "DBDReflectionCaptureSpawnerComponent.h"

void UDBDReflectionCaptureSpawnerComponent::SetIBLMultiplicator(float NewIBLMultiplicator) {
}

void UDBDReflectionCaptureSpawnerComponent::SetContributionFactor(float NewContributionFactor) {
}

void UDBDReflectionCaptureSpawnerComponent::SetBrightness(float NewBrightness) {
}

UDBDReflectionCaptureSpawnerComponent::UDBDReflectionCaptureSpawnerComponent() {
    this->ReflectionSourceType = EReflectionSourceType::CapturedScene;
    this->Cubemap = NULL;
    this->SourceCubemapAngle = 0.00f;
    this->Brightness = 1.00f;
    this->ContributionFactor = 0.00f;
    this->IBLMultiplicator = 1.00f;
    this->bCanBeTinted = true;
    this->SpawnedReflectionCaptures.AddDefaulted(2);
    this->SpawnedReflectionCaptureComponents.AddDefaulted(2);
}

