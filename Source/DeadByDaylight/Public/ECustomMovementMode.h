#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM()
enum class ECustomMovementMode {
    CUSTOM_MOVE_None,
    CUSTOM_MOVE_Snapping,
    CUSTOM_MOVE_MAX UMETA(Hidden),
};

