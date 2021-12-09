#include "OnboardingTutorialButtonViewData.h"

FOnboardingTutorialButtonViewData::FOnboardingTutorialButtonViewData() {
    this->StepStatus = EOnboardingStepStatus::Unavailable;
    this->Icon = NULL;
    this->ButtonStyle = EOnboardingTutorialButtonStyle::Default;
}

