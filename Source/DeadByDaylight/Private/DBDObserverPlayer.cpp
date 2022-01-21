#include "DBDObserverPlayer.h"
#include "DBDPlayerData.h"

void ADBDObserverPlayer::Server_PlayerReady_Implementation() {
}
bool ADBDObserverPlayer::Server_PlayerReady_Validate() {
    return true;
}

ADBDObserverPlayer::ADBDObserverPlayer() {
    this->_playerData = CreateDefaultSubobject<UDBDPlayerData>(TEXT("PlayerData"));
}

