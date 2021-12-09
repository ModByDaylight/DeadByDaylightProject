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
    this->_bloodStoreTitle = INVTEXT("BLOODMARKET");
    this->_killersTitle = INVTEXT("KILLER");
    this->_survivorsTitle = INVTEXT("SURVIVOR");
}

