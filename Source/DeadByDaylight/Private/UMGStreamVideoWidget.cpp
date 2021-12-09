#include "UMGStreamVideoWidget.h"

void UUMGStreamVideoWidget::OnTapButtonClicked() {
}

void UUMGStreamVideoWidget::OnSkipButtonClicked() {
}

UUMGStreamVideoWidget::UUMGStreamVideoWidget() {
    this->VideoImage = NULL;
    this->TapButton = NULL;
    this->SkipButton = NULL;
    this->_timerShowSkipButton = 5.00f;
}

