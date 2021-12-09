#pragma once
#include "CoreMinimal.h"
#include "ETimerState.generated.h"

UENUM()
enum class ETimerState : uint8 {
    Cleared,
    Started,
    Paused,
};

