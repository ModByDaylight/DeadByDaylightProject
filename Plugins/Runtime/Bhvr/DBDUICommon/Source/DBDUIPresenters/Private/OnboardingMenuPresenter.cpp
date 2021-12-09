#include "OnboardingMenuPresenter.h"

void UOnboardingMenuPresenter::OnSetUIEnabled(bool enabled) {
}

void UOnboardingMenuPresenter::OnMenuTabSelectedAgain(EOnboardingMenuState onboardingMenuState) {
}

void UOnboardingMenuPresenter::OnMenuTabSelected(EOnboardingMenuState onboardingMenuState) {
}

void UOnboardingMenuPresenter::OnBackAction() {
}

UOnboardingMenuPresenter::UOnboardingMenuPresenter() {
    this->OnboardingMenuWidgetClass = NULL;
    this->_onboardingTutorialSubPresenter = NULL;
    this->_gameManualSubPresenter = NULL;
    this->_activeSubPresenter = NULL;
}

