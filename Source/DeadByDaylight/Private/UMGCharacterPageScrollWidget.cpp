#include "UMGCharacterPageScrollWidget.h"

void UUMGCharacterPageScrollWidget::HandleCharacterClicked(int32 characterIndex) {
}

UUMGCharacterPageScrollWidget::UUMGCharacterPageScrollWidget() {
    this->_isKiller = false;
    this->_charactersTitleText = FText::FromString(TEXT("CHARACTERS"));
    this->_killersTitleText = FText::FromString(TEXT("KILLERS"));
    this->_survivorsTitleText = FText::FromString(TEXT("SURVIVORS"));
}

