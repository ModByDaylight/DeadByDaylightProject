#pragma once
#include "CoreMinimal.h"
#include "EPerkCategory.generated.h"

UENUM()
enum class EPerkCategory : uint8 {
    None,
    Navigation,
    Perception,
    Safeguard,
    Concealment,
    Strategy,
    Support,
    Adaptation,
    Chasing,
    Tracking,
    Cruelty,
    Trickery,
    Obstruction,
    Hinderance,
    Enhancement,
};

