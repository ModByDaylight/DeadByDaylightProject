#pragma once
#include "CoreMinimal.h"
#include "EHarpoonPositionState.generated.h"

UENUM()
enum class EHarpoonPositionState {
    None,
    LoadedInRifle,
    FollowingProjectile,
    ReelBackToRifle,
    AttachedToPlayer,
    Animated,
};

