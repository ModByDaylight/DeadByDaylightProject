#include "UMGTallyCharacterProgressionWidget.h"

void UUMGTallyCharacterProgressionWidget::StartSequence() {
}

void UUMGTallyCharacterProgressionWidget::StartNewLevel() {
}

void UUMGTallyCharacterProgressionWidget::SetWidgetToFinalState() {
}

void UUMGTallyCharacterProgressionWidget::OnFullBarOut() {
}

void UUMGTallyCharacterProgressionWidget::OnFullBarIn() {
}

UUMGTallyCharacterProgressionWidget::UUMGTallyCharacterProgressionWidget() {
    this->CharacterProgressionBar = NULL;
    this->TextCharacterCurrentExperience = NULL;
    this->TextExperienceForNextLevel = NULL;
    this->TextExperienceEarned = NULL;
    this->TextCurrentLevel = NULL;
    this->CharacterPicture = NULL;
    this->PrestigeIcon = NULL;
    this->TextCharacterName = NULL;
    this->ExperiencePerSecond = 0;
}

