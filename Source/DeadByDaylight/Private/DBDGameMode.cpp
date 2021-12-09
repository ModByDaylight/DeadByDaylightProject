#include "DBDGameMode.h"

class APlayerState;

void ADBDGameMode::SetEscapeOpened(bool val) {
}

void ADBDGameMode::RegisterOnPlayerStateChanged(APlayerState* playerState) {
}

void ADBDGameMode::OnPlayerGameStateChanged(EGameState playerGameState) {
}

void ADBDGameMode::LevelLoaded(const FString& levelName) {
}

bool ADBDGameMode::IsEscapeOpen() const {
    return false;
}

void ADBDGameMode::HostGame() {
}

void ADBDGameMode::DBD_BlockCamperEscape(bool shouldBlock) {
}

bool ADBDGameMode::AreLoadoutsCreated() const {
    return false;
}

ADBDGameMode::ADBDGameMode() {
    this->_killerPlayerControllerClass = NULL;
    this->_survivorPlayerControllerClass = NULL;
    this->KillerCreationPositionOrder = 0;
}

