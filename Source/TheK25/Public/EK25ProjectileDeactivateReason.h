#pragma once
#include "CoreMinimal.h"
#include "EK25ProjectileDeactivateReason.generated.h"

UENUM(BlueprintType)
enum class EK25ProjectileDeactivateReason : uint8 {
    None,
    WorldCollisionHit,
    CharacterHit,
    OutOfBounds,
    MaximumRangeReached,
    ChainStrikeInteractionEnded,
};

