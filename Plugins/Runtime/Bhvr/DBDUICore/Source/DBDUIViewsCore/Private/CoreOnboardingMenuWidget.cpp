#include "CoreOnboardingMenuWidget.h"

class UCoreSelectableButtonWidget;

void UCoreOnboardingMenuWidget::SetTitleText(const bool isInTutorial) {
}

void UCoreOnboardingMenuWidget::SetBackButtonText(const bool isFTUE) {
}

void UCoreOnboardingMenuWidget::OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton) {
}

void UCoreOnboardingMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton) {
}

UCoreOnboardingMenuWidget::UCoreOnboardingMenuWidget() {
    this->OnboardingMenuTabs = NULL;
    this->MenuTitle = NULL;
    this->BackInputSwitcher = NULL;
}

