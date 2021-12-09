#pragma once
#include "CoreMinimal.h"
#include "EExtMoveToStrafeFocusOptions.generated.h"

UENUM()
enum class EExtMoveToStrafeFocusOptions : uint8 {
    Never,
    NearFocus,
    NearGoal,
    Always,
    Intermittent,
};

