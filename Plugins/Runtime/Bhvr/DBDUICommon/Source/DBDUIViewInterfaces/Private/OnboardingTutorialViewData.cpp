#include "OnboardingTutorialViewData.h"

FOnboardingTutorialViewData::FOnboardingTutorialViewData() {
    this->Completed = false;
    this->MainRewardClaimed = false;
    this->TutorialType = EOnboardingTutorialType::TutorialLevel;
    this->ButtonStyle = EOnboardingTutorialButtonStyle::Default;
    this->Icon = NULL;
}

