#pragma once
#include "CoreMinimal.h"
#include "EGhostStealthState.generated.h"

UENUM()
enum class EGhostStealthState : uint8 {
    AWAITING_ACTIVATION,
    ACTIVATED,
    COOLDOWN,
};

