#include "KillerIntroComponent.h"

void UKillerIntroComponent::OnLevelReadyToPlay() {
}

void UKillerIntroComponent::OnIntroCompleted() {
}

void UKillerIntroComponent::KillerCameraPanInUpdateNative(const float killerIntroCompletedPercent) {
}

UKillerIntroComponent::UKillerIntroComponent() {
    this->_percentOfCameraPanInProgressRequiredToHideKiller = 0.70f;
    this->_cameraPanInAmountToSquish = 3.00f;
    this->_cameraPanInHidingStrategy = EFPVTransitionStrategy::TurnInvisible;
    this->_startKillerIntroDelay = 0.00f;
}

