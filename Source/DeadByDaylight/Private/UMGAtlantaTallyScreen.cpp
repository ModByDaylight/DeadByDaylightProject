#include "UMGAtlantaTallyScreen.h"


void UUMGAtlantaTallyScreen::SetScrollPageSize(const FGeometry& MyGeometry) {
}

void UUMGAtlantaTallyScreen::HandleTallySpectateClicked() {
}

void UUMGAtlantaTallyScreen::HandleTallyLeave() {
}

void UUMGAtlantaTallyScreen::HandleReportEvent(const FString& playerID) {
}

void UUMGAtlantaTallyScreen::HandleAddFriendEvent(const FString& playerID) {
}

UUMGAtlantaTallyScreen::UUMGAtlantaTallyScreen() {
    this->TallyScrollWidget = NULL;
    this->TextLeaveLobby = FText::FromString(TEXT("LEAVE"));
    this->SpectateButtonText = FText::FromString(TEXT("SPECTATE"));
    this->PlayerRole = EPlayerRole::VE_None;
    this->GameType = EGameType::Online;
    this->PlayerStatus = 0;
    this->FromSpectateMode = false;
    this->_scoreboardWidget = NULL;
    this->_bloodpointsWidget = NULL;
    this->_rankWidget = NULL;
    this->_playerLevelWidget = NULL;
    this->_characterLevelWidget = NULL;
}

