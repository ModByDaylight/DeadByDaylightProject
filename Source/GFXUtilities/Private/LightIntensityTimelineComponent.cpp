#include "LightIntensityTimelineComponent.h"

class UCurveFloat;
class ULightComponent;
class UMaterialHelper;

void ULightIntensityTimelineComponent::SetRandomizeLength(bool isRandom) {
}

void ULightIntensityTimelineComponent::SetMinLength(float newMinValue) {
}

void ULightIntensityTimelineComponent::SetMaxLength(float newMaxValue) {
}

void ULightIntensityTimelineComponent::SetLightToMaxValue() {
}

void ULightIntensityTimelineComponent::SetLightCurve(UCurveFloat* lightcurve) {
}

void ULightIntensityTimelineComponent::Reset() {
}

void ULightIntensityTimelineComponent::RegisterForTick() {
}

void ULightIntensityTimelineComponent::DeactivateTick() {
}

void ULightIntensityTimelineComponent::AddMaterialHelper(UMaterialHelper* matHelper, FName propName, float multiplier) {
}

void ULightIntensityTimelineComponent::AddLight(ULightComponent* light, float multiplier) {
}

ULightIntensityTimelineComponent::ULightIntensityTimelineComponent() {
    this->intensityCurve = NULL;
    this->randomizeStart = true;
    this->randomizeLength = false;
    this->minLength = 0.50f;
    this->maxLength = 2.00f;
    this->normalizeCurve = false;
    this->startTicking = true;
    this->inputLightUnit = ELightUnits::Unitless;
}

