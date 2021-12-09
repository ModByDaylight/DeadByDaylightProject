#include "LightingHelper.h"

class UTextureCube;

void ULightingHelper::ToggleDreamworldLighting(bool bActivateDreamworld) {
}

UTextureCube* ULightingHelper::GetTextureCube(FName mapTheme) {
    return NULL;
}

UClass* ULightingHelper::GetSourceLevelLightingClass() {
    return NULL;
}

void ULightingHelper::DBD_ModifyExposure(float value) {
}

ULightingHelper::ULightingHelper() {
    this->_levelLighting = NULL;
    this->_levelLightingFixed = NULL;
    this->_levelLightingSpawned = NULL;
    this->_levelLightingWithoutExposure = NULL;
    this->_adaptiveShadowMapControllersActor = NULL;
    this->_lightingInterpolator = NULL;
    this->_lightingFactory = NULL;
    this->_postProcessCache = NULL;
    this->_bIsDreamworldActive = false;
}

