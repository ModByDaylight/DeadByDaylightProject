#include "UMGLobbySearchingWidget.h"



void UUMGLobbySearchingWidget::OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData) {
}

void UUMGLobbySearchingWidget::OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData) {
}

void UUMGLobbySearchingWidget::OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, ECurrencyType currencyType) {
}

void UUMGLobbySearchingWidget::HandleLeaveButtonClicked() {
}

UUMGLobbySearchingWidget::UUMGLobbySearchingWidget() {
    this->BankAndPlayerInfoWidget = NULL;
    this->ItemOrPowerText = FText::FromString(TEXT("POWERS"));
    this->AddonText = FText::FromString(TEXT("ADD-ONS"));
    this->OfferingText = FText::FromString(TEXT("OFFERINGS"));
    this->PerksText = FText::FromString(TEXT("PERKS"));
    this->TextWaitingForPlayers = FText::FromString(TEXT("WAITING FOR PLAYERS"));
    this->TextEstimatedTimeTitle = FText::FromString(TEXT("ESTIMATED TIME"));
    this->ButtonCancelSearching = NULL;
    this->PartySlots = NULL;
}

