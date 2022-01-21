#include "UMGTooltipContentPlayerLevelWidget.h"

void UUMGTooltipContentPlayerLevelWidget::SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience) {
}

UUMGTooltipContentPlayerLevelWidget::UUMGTooltipContentPlayerLevelWidget() {
    this->PlayerLevelText = FText::FromString(TEXT("Your <B>Player Level</B> represents your OVERALL PROGRESSION. All characters that you play, whether Killer or Survivor, contribute to your Player Level."));
    this->LevelBanner = NULL;
    this->LevelExperienceRichText = NULL;
    this->ExperienceToNextLevelText = NULL;
}

