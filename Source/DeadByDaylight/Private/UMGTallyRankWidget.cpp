#include "UMGTallyRankWidget.h"

class UUMGTallyEmblemWidget;

FTallyScorePipsData UUMGTallyRankWidget::GetScoreData() const {
    return FTallyScorePipsData{};
}

TArray<UUMGTallyEmblemWidget*> UUMGTallyRankWidget::GetEmblems() const {
    return TArray<UUMGTallyEmblemWidget*>();
}

UUMGTallyRankWidget::UUMGTallyRankWidget() {
    this->EmblemsContainer = NULL;
    this->ProgressBar = NULL;
    this->RankBanner = NULL;
    this->RankProgressLabel = NULL;
}

