#include "UIScaleManager.h"

float UUIScaleManager::GetSkillCheckScaleFactor() const {
    return 0.0f;
}

float UUIScaleManager::GetScaleFactor(EScaleType type) const {
    return 0.0f;
}

float UUIScaleManager::GetMenuScaleFactor() const {
    return 0.0f;
}

float UUIScaleManager::GetHudScaleFactor() const {
    return 0.0f;
}

EDPIScaleCurveRatio UUIScaleManager::GetDPIScaleCurveRatio() {
    return EDPIScaleCurveRatio::Default;
}

UUIScaleManager::UUIScaleManager() {
    this->_dpiScaleCurveDB = NULL;
    this->_dpiScaleCurve = NULL;
}

