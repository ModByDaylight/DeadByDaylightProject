#include "UMGLevelBannerWidget.h"

void UUMGLevelBannerWidget::StopHighlight() {
}

void UUMGLevelBannerWidget::StartHighlight() {
}

void UUMGLevelBannerWidget::SetProgressBarValue(const float progress) {
}


void UUMGLevelBannerWidget::SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience) {
}


void UUMGLevelBannerWidget::OnTooltipButtonLongPressEvent() {
}

UUMGLevelBannerWidget::UUMGLevelBannerWidget() {
    this->TooltipButton = NULL;
    this->PlayerLevelText = NULL;
    this->PlayerDevotionText = NULL;
    this->PlayerCurrentExperienceText = NULL;
    this->PlayerNextLevelExperienceText = NULL;
    this->XPProgressBar = NULL;
    this->XPTextContainer = NULL;
    this->OnLongPressSound = NULL;
    this->TooltipHighlightPicture = NULL;
}

