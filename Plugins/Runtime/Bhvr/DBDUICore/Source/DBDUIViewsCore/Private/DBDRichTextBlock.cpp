#include "DBDRichTextBlock.h"

void UDBDRichTextBlock::SetHTMLText(const FText& InText) {
}

UDBDRichTextBlock::UDBDRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->_debugPreviewLargeTextState = false;
    this->_debugPreviewUndockedState = false;
    this->_hasLargeText = false;
    this->_overrideUndockedPropertiesWithLargeText = false;
    this->_hasUndocking = false;
}

