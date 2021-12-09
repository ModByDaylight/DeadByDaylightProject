#include "BaseTooltipWidget.h"

void UBaseTooltipWidget::OnQuitButtonClicked() {
}

UBaseTooltipWidget::UBaseTooltipWidget() {
    this->TitleLabel = NULL;
    this->TooltipContainer = NULL;
    this->DescriptionLabel = NULL;
    this->CloseButton = NULL;
    this->TooltipOpeningSound = NULL;
}

