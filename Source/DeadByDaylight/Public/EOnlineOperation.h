#pragma once
#include "CoreMinimal.h"
#include "EOnlineOperation.generated.h"

UENUM()
enum class EOnlineOperation {
    None,
    HostGame,
    EndingSession,
    DestroyingSession,
    PreparingJoinGame,
    JoinGame,
    JoinCancelled,
    OnlineCheck,
    CancellingMatchmaking,
};

