#include "HitValidationEditorConfig.h"

FHitValidationEditorConfig::FHitValidationEditorConfig() {
    this->ConfigName = EHitValidatorConfigName::Default;
    this->CapsuleInflation = 0.00f;
    this->MaximumDistance = 0.00f;
}

