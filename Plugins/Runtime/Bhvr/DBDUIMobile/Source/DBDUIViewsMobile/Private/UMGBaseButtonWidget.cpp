#include "UMGBaseButtonWidget.h"

void UUMGBaseButtonWidget::HandleButtonReleasedEvent() {
}

void UUMGBaseButtonWidget::HandleButtonPressedEvent() {
}

void UUMGBaseButtonWidget::HandleButtonLongPressEvent() {
}

void UUMGBaseButtonWidget::HandleButtonHoveredEvent() {
}

void UUMGBaseButtonWidget::HandleButtonClickedEvent() {
}

UUMGBaseButtonWidget::UUMGBaseButtonWidget() {
    this->Button = NULL;
    this->IconPicture = NULL;
    this->ButtonLabel = NULL;
    this->OnPressSound = NULL;
    this->OnClickSound = NULL;
    this->OnLongPressSound = NULL;
    this->OnReleaseSound = NULL;
    this->OnHoveredSound = NULL;
}

