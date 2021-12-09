#include "DBDPlayerState_Lobby.h"
#include "Net/UnrealNetwork.h"

void ADBDPlayerState_Lobby::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADBDPlayerState_Lobby, IsOwnershipValidated);
}

ADBDPlayerState_Lobby::ADBDPlayerState_Lobby() {
    this->IsOwnershipValidated = true;
}

