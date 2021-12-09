#pragma once
#include "CoreMinimal.h"
#include "EWallGrabState.generated.h"

UENUM(BlueprintType)
enum class EWallGrabState : uint8 {
    None,
    Charging,
    Charged,
    NonLethalCharge,
    Adjusting,
    Holding,
    LethalCharge,
    Cooldown,
    Sliding,
    Attacking,
};

