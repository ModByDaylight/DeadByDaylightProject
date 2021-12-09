#include "UMGDailyRewardWidget.h"





void UUMGDailyRewardWidget::HandleUnlockRewardAnimationFinished() {
}

void UUMGDailyRewardWidget::HandleUnlockMysteryRewardAnimationFinished() {
}

void UUMGDailyRewardWidget::HandleDiscoverRewardAnimationFinished() {
}

void UUMGDailyRewardWidget::HandleCollectRewardAnimationFinished() {
}

void UUMGDailyRewardWidget::HandleCollectButtonClick() {
}



UUMGDailyRewardWidget::UUMGDailyRewardWidget() {
    this->IsMarkedSpecial = false;
    this->State = EUMGDailyRewardWidgetState::Unknown;
    this->AmountText = NULL;
    this->ItemNameText = NULL;
    this->RewardNumberText = NULL;
    this->RewardTypeSwitcher = NULL;
    this->ItemInfoPanel = NULL;
    this->OfferingInfoPanel = NULL;
    this->GenericInfoPanel = NULL;
    this->FreeTicketInfoPanel = NULL;
    this->CrateKeyInfoPanel = NULL;
    this->ItemIcon = NULL;
    this->OfferingIcon = NULL;
    this->GenericRewardIcon = NULL;
    this->FreeTicketRewardIcon = NULL;
    this->ParentItemIcon = NULL;
    this->CrateKeyRewardIcon = NULL;
    this->ParentItemPanel = NULL;
}

