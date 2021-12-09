#pragma once
#include "CoreMinimal.h"
#include "EK26AmmoState.generated.h"

UENUM()
enum class EK26AmmoState : uint8 {
    Available,
    Expiring,
    Recharging,
};

