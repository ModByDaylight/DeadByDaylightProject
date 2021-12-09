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
    this->ItemOrPowerText = INVTEXT("POWERS");
    this->AddonText = INVTEXT("ADD-ONS");
    this->OfferingText = INVTEXT("OFFERINGS");
    this->PerksText = INVTEXT("PERKS");
    this->TextWaitingForPlayers = INVTEXT("WAITING FOR PLAYERS");
    this->TextEstimatedTimeTitle = INVTEXT("ESTIMATED TIME");
    this->ButtonCancelSearching = NULL;
    this->PartySlots = NULL;
}

