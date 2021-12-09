#include "TutorialLevel.h"

void ATutorialLevel::StartTutorial() {
}

void ATutorialLevel::SetHandledTutorialStep(ETutorialStep tutorialStep) {
}

void ATutorialLevel::RemoveObjective(FName objectiveId) {
}

void ATutorialLevel::OnTutorialStepUpdated(ETutorialStep tutorialStep) {
}

void ATutorialLevel::OnNotificationDismissed(FName notificationId) {
}



void ATutorialLevel::DisplayNotification(FName notificationId, float time) {
}

void ATutorialLevel::DisplayBlockingNotification(FName notificationId) {
}

void ATutorialLevel::CompleteObjective(FName objectiveId) {
}

void ATutorialLevel::AddObjective(FName objectiveId) {
}

ATutorialLevel::ATutorialLevel() {
    this->_tutorialStarted = false;
}

