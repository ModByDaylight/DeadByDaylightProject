#pragma once
#include "CoreMinimal.h"
#include "ELobbyWaitStopReason.generated.h"

UENUM()
enum class ELobbyWaitStopReason {
    StartMatchWait,
    PlayerCancelled,
    Unknown,
};

