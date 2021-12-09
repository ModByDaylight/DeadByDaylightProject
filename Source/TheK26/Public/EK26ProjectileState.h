#pragma once
#include "CoreMinimal.h"
#include "EK26ProjectileState.generated.h"

UENUM(BlueprintType)
enum class EK26ProjectileState : uint8 {
    Invalid,
    Summoning,
    Idle,
    FollowingPath,
    OffPath,
    Destroyed,
};

