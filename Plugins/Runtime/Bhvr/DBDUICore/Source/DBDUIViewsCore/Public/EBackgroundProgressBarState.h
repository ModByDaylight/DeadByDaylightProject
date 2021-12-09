#pragma once
#include "CoreMinimal.h"
#include "EBackgroundProgressBarState.generated.h"

UENUM()
enum class EBackgroundProgressBarState {
    Empty,
    Quarter,
    Half,
    ThreeQuarters,
    Full,
};

