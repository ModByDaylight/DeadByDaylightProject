#pragma once
#include "CoreMinimal.h"
#include "EInteractionTargetInSightModes.generated.h"

UENUM()
enum class EInteractionTargetInSightModes : uint8 {
    None,
    MustBeInSight,
    MustBeInSight_NoObstruction,
    ActivateIfOutOfSight,
};

