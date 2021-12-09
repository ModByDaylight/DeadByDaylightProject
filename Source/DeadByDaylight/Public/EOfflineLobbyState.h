#pragma once
#include "CoreMinimal.h"
#include "EOfflineLobbyState.generated.h"

UENUM()
enum class EOfflineLobbyState : uint8 {
    None,
    RoleSelection,
    OfflineLobby,
    Store,
    PartyLobby,
    Archives,
};

