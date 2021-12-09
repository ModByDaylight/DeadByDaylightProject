#include "UMGPartySlotsWidget.h"

void UUMGPartySlotsWidget::SwapWidgets(int32 first, int32 second) {
}

void UUMGPartySlotsWidget::SetWidgetState(int32 index, EPartyPlayerSlotWidgetState state) {
}

void UUMGPartySlotsWidget::RearrangePartySlots() {
}

void UUMGPartySlotsWidget::HandleKickPlayerButtonClickEvent(const FString& friendKrakenId) {
}

void UUMGPartySlotsWidget::HandleInviteFriendButtonClickEvent() {
}

void UUMGPartySlotsWidget::HandleBotEditButtonClickEvent(const int32 index) {
}

UUMGPartySlotsWidget::UUMGPartySlotsWidget() {
    this->PartyPlayerSlotsContainer = NULL;
    this->PartyBotSlotsContainer = NULL;
    this->MaxSlotCount = 5;
}

