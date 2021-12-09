#include "UMGPlayerRankInfo.h"

void UUMGPlayerRankInfo::SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips, FText NewTitleLabel, FText NewPipLabel, EPlayerRole playerRole, bool IsHighlight) {
}

UUMGPlayerRankInfo::UUMGPlayerRankInfo() {
    this->PipsContainerWidget = NULL;
    this->RankFrameWidget = NULL;
    this->Background = NULL;
    this->TitleLabel = NULL;
    this->RankLabel = NULL;
    this->PipLabel = NULL;
    this->HighlightContainer = NULL;
    this->_disableOpacity = 0.50f;
}

