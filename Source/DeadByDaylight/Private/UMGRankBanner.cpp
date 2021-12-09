#include "UMGRankBanner.h"

void UUMGRankBanner::StopHighlight() {
}

void UUMGRankBanner::StartHighlight() {
}

void UUMGRankBanner::SetData(int32 rank, EPlayerRole playerRole) {
}

void UUMGRankBanner::HandleTooltipLongPressedEvent() {
}

UUMGRankBanner::UUMGRankBanner() {
    this->RankFrameWidget = NULL;
    this->TooltipButton = NULL;
    this->HighlightImage = NULL;
    this->OnLongPressSound = NULL;
}

