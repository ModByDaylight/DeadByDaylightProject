#include "UMGAtlantaSeasonEndPopup.h"

void UUMGAtlantaSeasonEndPopup::TriggerFadeOutAnimationTimer() {
}

void UUMGAtlantaSeasonEndPopup::PlayNewRankFadeInAnimation() {
}

UUMGAtlantaSeasonEndPopup::UUMGAtlantaSeasonEndPopup() {
    this->OldSurvivorRankBanner = NULL;
    this->NewSurvivorRankBanner = NULL;
    this->OldKillerRankBanner = NULL;
    this->NewKillerRankBanner = NULL;
    this->NewRankHorizontalBox = NULL;
    this->OldRankHorizontalBox = NULL;
    this->_timerBeforeFadeOutAnimation = 2.00f;
}

