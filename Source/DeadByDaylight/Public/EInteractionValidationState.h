#pragma once
#include "CoreMinimal.h"
#include "EInteractionValidationState.generated.h"

UENUM()
enum class EInteractionValidationState : uint8 {
    None,
    Predicted,
    Authorized,
    DeniedByRaceCondition,
    DeniedByTimeout,
    DeniedByError,
};

