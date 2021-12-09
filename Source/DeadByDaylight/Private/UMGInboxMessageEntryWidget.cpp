#include "UMGInboxMessageEntryWidget.h"

void UUMGInboxMessageEntryWidget::UpdateMessageData_Implementation(FInboxMessageUIData messageData) {
}

void UUMGInboxMessageEntryWidget::SetMessageData(const FInboxMessageUIData& messageData) {
}

FInboxMessageElapsedTime UUMGInboxMessageEntryWidget::GetElapsedTime() {
    return FInboxMessageElapsedTime{};
}

UUMGInboxMessageEntryWidget::UUMGInboxMessageEntryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->_isCurrentSelection = false;
}

