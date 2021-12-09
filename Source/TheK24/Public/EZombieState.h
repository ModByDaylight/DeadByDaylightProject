#pragma once
#include "CoreMinimal.h"
#include "EZombieState.generated.h"

UENUM(BlueprintType)
enum class EZombieState : uint8 {
    InPool,
    Spawn,
    Patrolling,
    Searching,
    Chase,
    Attack,
    Dying,
    Dead,
    ChaseSearching,
    InPlaceIdle,
    Stunned,
    FallSmash,
    AttackCooldown,
    Stop,
};

