#pragma once
#include "CoreMinimal.h"
#include "EK25ChainState.generated.h"

UENUM()
enum class EK25ChainState : uint8 {
    InPool,
    AttachedToProjectile,
    AttachedToSurvivorAnchorPoint,
    ReelingBack,
    ReachingSurvivorAnchorPoint,
};

