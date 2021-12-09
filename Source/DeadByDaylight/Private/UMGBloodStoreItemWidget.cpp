#include "UMGBloodStoreItemWidget.h"

void UUMGBloodStoreItemWidget::UnFocusNode_Implementation() {
}




void UUMGBloodStoreItemWidget::FocusNode_Implementation() {
}

void UUMGBloodStoreItemWidget::ConsumeNode_Implementation() {
}

void UUMGBloodStoreItemWidget::CollectNode_Implementation() {
}

void UUMGBloodStoreItemWidget::BroadcastBloodNodeSelected() {
}

UUMGBloodStoreItemWidget::UUMGBloodStoreItemWidget() {
    this->NodeImage = NULL;
    this->BackgroundImage = NULL;
    this->RarityBackground = NULL;
    this->ItemPanel = NULL;
    this->MysteryBoxPanel = NULL;
    this->MysteryBoxRarityBackground = NULL;
    this->CollectedPanel = NULL;
    this->ConsumedPanel = NULL;
    this->_contentType = EBloodwebNodeContentType::Empty;
    this->_isMysteryBox = false;
    this->_consumedOpacity = 0.85f;
}

