#pragma once
#include "CoreMinimal.h"
#include "ETrailPointRefreshReason.generated.h"

UENUM()
enum class ETrailPointRefreshReason : uint8 {
    FrontNeighbourAdded,
    BackNeighbourAdded,
    BackNeighbourRemoved,
    FrontNeighbourRemoved,
    None,
};

