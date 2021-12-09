#include "UMGLobbyJoinedWidget.h"








void UUMGLobbyJoinedWidget::HandleLeaveButtonClicked() {
}


UUMGLobbyJoinedWidget::UUMGLobbyJoinedWidget() {
    this->LocalPlayerIsSlasher = false;
    this->TextLeaveLobby = INVTEXT("LEAVE LOBBY");
    this->TextPlayerNotReadyYet = INVTEXT("NOT READY YET");
    this->TextWaitingPlayers = INVTEXT("WAITING FOR PLAYERS");
    this->TextToBeReady = INVTEXT("TO BE READY");
    this->CommandButtonsContainer = NULL;
}

