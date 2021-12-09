#include "PerkSelectionSlotWidget.h"

void UPerkSelectionSlotWidget::OnButtonClicked() {
}

UPerkSelectionSlotWidget::UPerkSelectionSlotWidget() {
    this->PerkName = NULL;
    this->TextChoose = NULL;
    this->PerkActionButton = NULL;
    this->SelectedIcon = NULL;
    this->DescriptionText = NULL;
    this->PictureBackground = NULL;
    this->PicturePerkBackground = NULL;
    this->PictureHighlightFrame = NULL;
    this->PictureTopRightBackground = NULL;
    this->PictureTopRightFrame = NULL;
    this->HighOpacity = 1.00f;
    this->LowOpacity = 0.40f;
    this->PerkBackgroundLowOpacity = 0.30f;
    this->DescriptionBackgroundLowOpacity = 0.35f;
}

