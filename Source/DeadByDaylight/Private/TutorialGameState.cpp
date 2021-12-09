#include "TutorialGameState.h"

void ATutorialGameState::TutorialEndReached() {
}

void ATutorialGameState::SetForcedHatchVisibility(bool isHatchVisible) {
}

void ATutorialGameState::SetEscapeRequirementsVisibility(bool isVisible) const {
}

void ATutorialGameState::SetCurrentTutorialStep(ETutorialStep step) {
}

bool ATutorialGameState::IsTutorialStarted() const {
    return false;
}

ETutorialStep ATutorialGameState::GetCurrentTutorialStep() const {
    return ETutorialStep::Survivor_NotStarted;
}

void ATutorialGameState::CompleteLocallyControlledCharacterIntros() const {
}

ATutorialGameState::ATutorialGameState() {
    this->_forceHatchVisible = false;
}

