#include "UMGHudEditorVersionWidget.h"

void UUMGHudEditorVersionWidget::Show() {
}

void UUMGHudEditorVersionWidget::OnButtonClick() {
}

void UUMGHudEditorVersionWidget::Hide() {
}

UUMGHudEditorVersionWidget::UUMGHudEditorVersionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->VersionButton = NULL;
    this->_onEditWidget = NULL;
}

