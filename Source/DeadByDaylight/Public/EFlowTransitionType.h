#pragma once
#include "CoreMinimal.h"
#include "EFlowTransitionType.generated.h"

UENUM()
enum class EFlowTransitionType {
    Tally,
    OnlineLobby,
    PartyLobby,
    OfflineLobby,
    Splash,
    RoleSelection,
    None,
};

