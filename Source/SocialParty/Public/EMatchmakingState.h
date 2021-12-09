#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingState.generated.h"

UENUM()
enum class EMatchmakingState : uint8 {
    None,
    Searching,
    MatchFound,
    Error,
};

