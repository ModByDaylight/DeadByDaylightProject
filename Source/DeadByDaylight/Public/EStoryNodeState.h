#pragma once
#include "CoreMinimal.h"
#include "EStoryNodeState.generated.h"

UENUM()
enum class EStoryNodeState {
    None = -0x1,
    Unavailable,
    AvailableDefault,
    AvailableActive,
    AvailablePaused,
    Completed,
    Claimed,
};

