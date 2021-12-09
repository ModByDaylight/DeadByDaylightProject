#pragma once
#include "CoreMinimal.h"
#include "EGameFlowStep.generated.h"

UENUM()
enum class EGameFlowStep {
    None,
    InGame,
    OfflineLobby,
    OfflineTally,
    OnlineLobby,
    SplashScreen,
    PartyLobby,
    Store,
    RoleSelection,
};

