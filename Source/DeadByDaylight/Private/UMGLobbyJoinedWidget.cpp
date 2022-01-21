#include "UMGLobbyJoinedWidget.h"








void UUMGLobbyJoinedWidget::HandleLeaveButtonClicked() {
}


UUMGLobbyJoinedWidget::UUMGLobbyJoinedWidget() {
    this->LocalPlayerIsSlasher = false;
    this->TextLeaveLobby = FText::FromString(TEXT("LEAVE LOBBY"));
    this->TextPlayerNotReadyYet = FText::FromString(TEXT("NOT READY YET"));
    this->TextWaitingPlayers = FText::FromString(TEXT("WAITING FOR PLAYERS"));
    this->TextToBeReady = FText::FromString(TEXT("TO BE READY"));
    this->CommandButtonsContainer = NULL;
}

