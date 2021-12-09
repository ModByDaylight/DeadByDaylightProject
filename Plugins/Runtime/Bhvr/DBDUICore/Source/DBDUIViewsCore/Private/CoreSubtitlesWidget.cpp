#include "CoreSubtitlesWidget.h"


void UCoreSubtitlesWidget::OnEntryTimedOut() {
}

UCoreSubtitlesWidget::UCoreSubtitlesWidget() {
    this->SubtitlesTB = NULL;
    this->NumberOfCharacterPerLine = 38;
    this->DurationPerLine = 1.25f;
    this->KeepSingleCharacter = true;
}

