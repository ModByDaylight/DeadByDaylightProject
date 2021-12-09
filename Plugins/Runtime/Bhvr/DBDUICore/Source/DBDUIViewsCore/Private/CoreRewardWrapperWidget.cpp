#include "CoreRewardWrapperWidget.h"

class UCoreRewardWidget;

void UCoreRewardWrapperWidget::SetData(const FRewardWrapperViewData& viewData) {
}

UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget() {
    return NULL;
}

void UCoreRewardWrapperWidget::ClearData() {
}

UCoreRewardWrapperWidget::UCoreRewardWrapperWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CharacterRewardWidget = NULL;
    this->CurrencyProgressionRewardWidget = NULL;
    this->CustomizationRewardWidget = NULL;
    this->RewardContainer = NULL;
    this->_rewardWidget = NULL;
}

