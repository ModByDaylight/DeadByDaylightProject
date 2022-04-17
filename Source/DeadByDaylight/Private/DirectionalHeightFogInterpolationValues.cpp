#include "DirectionalHeightFogInterpolationValues.h"

FDirectionalHeightFogInterpolationValues::FDirectionalHeightFogInterpolationValues() {
    this->FogDensity = 0.00f;
    this->DirectionalInscatteringExponent = 0.00f;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->DistanceUntilFlatFog = 0.00f;
    this->DistanceUntilNoFog = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->VolumetricFogDistance = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity = 0.00f;
    this->bOverrideLightColorsWithFogInscatteringColors = false;
}

