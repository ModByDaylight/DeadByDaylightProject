#include "AtlantaSkillCheckWidget.h"

void UAtlantaSkillCheckWidget::SetHexed(bool isHexed) {
}

void UAtlantaSkillCheckWidget::SetActive(bool active) {
}


bool UAtlantaSkillCheckWidget::IsActive() const {
    return false;
}

UAtlantaSkillCheckWidget::UAtlantaSkillCheckWidget() {
    this->SkillCheckArea = NULL;
    this->HitArea = NULL;
    this->Hit = NULL;
    this->OrangeSmoke = NULL;
    this->BonusArea = NULL;
    this->StartMarker = NULL;
    this->EndMarker = NULL;
    this->HitAreaContainer = NULL;
    this->BonusAreaContainer = NULL;
    this->HitAreaStartMarkerContainer = NULL;
    this->HitAreaEndMarkerContainer = NULL;
    this->MarkerContainer = NULL;
    this->_isPlayAnimation = false;
    this->PathCoveredAngle = 0.00f;
}

