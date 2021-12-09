#include "UMGTallyPlayerLevelWidget.h"



TArray<FXpBonusData> UUMGTallyPlayerLevelWidget::GetXpBonuses() const {
    return TArray<FXpBonusData>();
}

TArray<FRewardItemData> UUMGTallyPlayerLevelWidget::GetRewardsEarned() const {
    return TArray<FRewardItemData>();
}

TArray<FPlayerLevelData> UUMGTallyPlayerLevelWidget::GetReachedLevels() const {
    return TArray<FPlayerLevelData>();
}

int32 UUMGTallyPlayerLevelWidget::GetInitialXp() const {
    return 0;
}

int32 UUMGTallyPlayerLevelWidget::GetFinalXp() const {
    return 0;
}

UUMGTallyPlayerLevelWidget::UUMGTallyPlayerLevelWidget() {
}

