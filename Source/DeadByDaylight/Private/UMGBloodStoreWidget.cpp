#include "UMGBloodStoreWidget.h"

void UUMGBloodStoreWidget::UnselectNode() {
}

void UUMGBloodStoreWidget::SwitchRole() {
}

void UUMGBloodStoreWidget::SetSelectedNode(const FString& selectedId) {
}


void UUMGBloodStoreWidget::RegenerateBloodStore() {
}

void UUMGBloodStoreWidget::PurchaseSelectedNode() {
}

UUMGBloodStoreWidget::UUMGBloodStoreWidget() {
    this->BloodStoreArrayWidget = NULL;
    this->ItemPreviewWidget = NULL;
    this->BloodStoreSubMenuWidget = NULL;
    this->_bloodStoreTitle = FText::FromString(TEXT("BLOODMARKET"));
    this->_killersTitle = FText::FromString(TEXT("KILLER"));
    this->_survivorsTitle = FText::FromString(TEXT("SURVIVOR"));
}

