#include "FlickeringLight.h"

class ULocalLightComponent;

void AFlickeringLight::StopFlickering() {
}

void AFlickeringLight::StartFlickering() {
}

void AFlickeringLight::Init() {
}

bool AFlickeringLight::GetSecondaryLightVisibilty() {
    return false;
}

ULocalLightComponent* AFlickeringLight::GetSecondaryLightComponent() {
    return NULL;
}

ULocalLightComponent* AFlickeringLight::GetActiveLightComponent() {
    return NULL;
}

AFlickeringLight::AFlickeringLight() {
    this->_lightComponentType = FlickeringLightType::Spot;
    this->_detailLevelBeforeCastShadows = DM_Medium;
    this->_innerConneAngle = 5.00f;
    this->_outerConneAngle = 10.00f;
    this->_sourceLength = 0.00f;
    this->_sourceRadius = 0.00f;
    this->_intensity = 250.00f;
    this->_generatorActivated = false;
    this->_isTimelineSpeedRandom = true;
    this->_maximumTimelimeSpeed = 2.00f;
    this->_minimumTimelimeSpeed = 0.50f;
    this->_secondaryLightIntensity = 250.00f;
    this->_secondaryLightAttenuationRadius = 1000.00f;
    this->_secondaryLightSpecularScale = 100.00f;
    this->_isAlwaysCapturedAsON = false;
    this->_lightIntensityTimeline = NULL;
    this->_pointLightComponent = NULL;
    this->_secondaryPointLightComponent = NULL;
    this->_rectLightComponent = NULL;
    this->_spotLightComponent = NULL;
}

