#include "UMGCharacterPageScrollWidget.h"

void UUMGCharacterPageScrollWidget::HandleCharacterClicked(int32 characterIndex) {
}

UUMGCharacterPageScrollWidget::UUMGCharacterPageScrollWidget() {
    this->_isKiller = false;
    this->_charactersTitleText = INVTEXT("CHARACTERS");
    this->_killersTitleText = INVTEXT("KILLERS");
    this->_survivorsTitleText = INVTEXT("SURVIVORS");
}

