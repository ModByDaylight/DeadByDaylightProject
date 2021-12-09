#pragma once
#include "CoreMinimal.h"
#include "EDemonModeState.generated.h"

UENUM()
enum class EDemonModeState : uint8 {
    Invalid,
    NotInPower,
    Activation,
    InPower,
    Cooldown,
};

