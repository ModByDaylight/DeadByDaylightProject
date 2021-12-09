#include "BloodDecalEffect.h"

UBloodDecalEffect::UBloodDecalEffect() {
    this->AnimationTimelineCurve = NULL;
    this->DestroyTimelineCurve = NULL;
    this->EnableVisualEffects = true;
    this->BloodDecalEffectIntensity = NULL;
    this->ColorInterpolationSpeed = 1.00f;
    this->DefalultDecalMaterial = NULL;
}

