#include "FlashlightFXComponent.h"

void UFlashlightFXComponent::UpdateFXTargets() {
}



void UFlashlightFXComponent::OnTurnedOn() {
}

void UFlashlightFXComponent::OnTurnedOff() {
}






float UFlashlightFXComponent::GetBlindingSuccessRatio() const {
    return 0.0f;
}

UFlashlightFXComponent::UFlashlightFXComponent() {
    this->_tip = NULL;
    this->_centerGlowMesh = NULL;
    this->_beamMesh = NULL;
    this->_minimumOcclusionDistanceForSpotlight = 5.00f;
    this->_flashEffectIntensityCurve = NULL;
    this->_flashEffectDuration = 0.50f;
    this->_spotLightHalfAngle = 5.00f;
    this->_spotLightIntensity = 10000.00f;
    this->_visualReworkSpotLightIntensity = 250000.00f;
    this->_beamBlindingHalfAngle = 2.00f;
    this->_beamFlashHalfAngle = 30.00f;
    this->_beamBlindingRatioInterpSpeedWithTarget = 3.00f;
    this->_beamBlindingRatioInterpSpeedWithoutTarget = 1.00f;
    this->_resizeConeLength = false;
    this->_centerGlowWidthScaleWithoutBlindTarget = 12.50f;
    this->_centerGlowWidthScaleWithBlindTarget = 5.00f;
    this->_centerGlowWidthScaleDuringFlash = 1.00f;
    this->_centerGlowShrinkDistance = 300.00f;
    this->_centerGlowLengthMaxScale = 500.00f;
    this->_currentBeamModifyingTarget = NULL;
}

