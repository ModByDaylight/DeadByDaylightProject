#pragma once
#include "CoreMinimal.h"
#include "EAuthoritativeMovementFlag.generated.h"

UENUM()
enum class EAuthoritativeMovementFlag : uint8 {
    INTERACTION,
    SLASHED,
    CHEAT,
    DROPPED,
    NOPUSH,
    INTERACTIONNOPUSH,
    DREAMWORLD_NOSLASHERCOLLISION,
    COUNT,
};

