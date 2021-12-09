#include "CoreOnboardingTutorialButtonWidget.h"

class UCoreButtonWidget;

void UCoreOnboardingTutorialButtonWidget::SetVisual() {
}



void UCoreOnboardingTutorialButtonWidget::OnRewardReleased(UCoreButtonWidget* buttonTarget) {
}

void UCoreOnboardingTutorialButtonWidget::OnRewardPressed(UCoreButtonWidget* buttonTarget) {
}

void UCoreOnboardingTutorialButtonWidget::OnRewardClicked(UCoreButtonWidget* buttonTarget) {
}

bool UCoreOnboardingTutorialButtonWidget::IsInUnavailableStep() const {
    return false;
}

UCoreOnboardingTutorialButtonWidget::UCoreOnboardingTutorialButtonWidget() {
    this->UnavailablePressedSfxName = TEXT("AudioEvent_UI_Select_Release_Locked");
    this->UnavailablePressedSfx = NULL;
    this->TitleText = NULL;
    this->DescriptionText = NULL;
    this->RewardsText = NULL;
    this->RoleIcon = NULL;
    this->StateSwitcher = NULL;
    this->LockedImage = NULL;
    this->CompletedImage = NULL;
}

