#pragma once
#include "CoreMinimal.h"
#include "EHatchStatus.generated.h"

UENUM()
enum class EHatchStatus : uint8 {
    Hidden,
    Visible,
    Open,
    Closed,
    ClosedOrHidden,
};

