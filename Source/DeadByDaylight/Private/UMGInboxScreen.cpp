#include "UMGInboxScreen.h"

class UPanelWidget;
class UUMGInboxMessageEntryWidget;






bool UUMGInboxScreen::RemoveMessageFromPanel(UPanelWidget* containingPanel, const FString& messageId, bool hasSeparator) {
    return false;
}


void UUMGInboxScreen::ReadMessageEvent(const FString& messageId) {
}

void UUMGInboxScreen::ReadAllMessagesEvent(EInboxMessageUIType messageType) {
}

int32 UUMGInboxScreen::FindWidgetIndexByMessageId(UPanelWidget* containingPanel, const FString& messageId) {
    return 0;
}

UUMGInboxMessageEntryWidget* UUMGInboxScreen::FindMessageWidgetById(UPanelWidget* containingPanel, const FString& messageId) {
    return NULL;
}

void UUMGInboxScreen::CleanMessageEvent(const FString& messageId) {
}

void UUMGInboxScreen::CleanAllMessagesEvent(EInboxMessageUIType messageType) {
}

void UUMGInboxScreen::ClaimMessageEvent(const FString& messageId) {
}

void UUMGInboxScreen::ClaimAllMessagesEvent(EInboxMessageUIType messageType) {
}

void UUMGInboxScreen::ButtonClickEvent(EInboxScreenButton buttonid) {
}

UUMGInboxScreen::UUMGInboxScreen() {
}

