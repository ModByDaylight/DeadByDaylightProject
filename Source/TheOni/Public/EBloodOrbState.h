#pragma once
#include "CoreMinimal.h"
#include "EBloodOrbState.generated.h"

UENUM()
enum class EBloodOrbState : uint8 {
    Invalid,
    BeingDropped,
    Idle,
    WaitingToMove,
    Attracted,
    Absorbed,
    Destroyed,
};

