#pragma once
#include "CoreMinimal.h"
#include "EErrorEventType.generated.h"

UENUM()
enum class EErrorEventType {
    FailedToCalculateRankProgress,
    FailedToEarnPlayerXp,
    FailedToGrandBloodPoints,
    FailedToSyncWalletChanges,
    InvalidLobbyId,
    InvalidGameState,
    InvalidSessionId,
};

